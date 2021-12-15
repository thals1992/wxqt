// *****************************************************************************
// * Copyright (c) 2020, 2021 joshua.tee@gmail.com. All rights reserved.
// *
// * Refer to the COPYING file of the official project for license.
// *****************************************************************************

#include "radar/WXGLDownload.h"
#include "common/GlobalDictionaries.h"
#include "common/GlobalVariables.h"
#include "objects/DownloadParallel.h"
#include "radar/WXGLNexrad.h"
#include "util/To.h"
#include "util/UtilityIO.h"
#include "util/UtilityList.h"
#include "util/UtilityString.h"

const QString WXGLDownload::pattern1 = ">(sn.[0-9]{4})</a>";
const QString WXGLDownload::pattern2 = ".*?([0-9]{2}-[A-Za-z]{3}-[0-9]{4} [0-9]{2}:[0-9]{2}).*?";
const QString WXGLDownload::nwsRadarPub = "https://tgftp.nws.noaa.gov/";
const QStringList WXGLDownload::pacRids = {"HKI", "HMO", "HKM", "HWA", "APD", "ACG", "AIH", "AHG", "AKC", "ABC", "AEC", "GUA"};

// Used by HI, STI, TVS
void WXGLDownload::getNidsTab(const QString& product, const QString& radarSite, FileStorage& fileStorage) {
    const auto url = getRadarFileUrl(radarSite, product, false);
    fileStorage.setMemoryBufferForL3TextProducts(product, UtilityIO::downloadAsByteArray(url));
}

QString WXGLDownload::getRidPrefix(const QString& radarSite, bool isTdwr) {
    if (isTdwr) {
        return "";
    } else {
        if (radarSite == "JUA") {
            return "t";
        } else if (pacRids.contains(radarSite)) {
            return "p";
        } else {
            return "k";
        }
    }
    return "";
}

QString WXGLDownload::getRadarDirectoryUrl(const QString& radarSite, const QString& product, const QString& ridPrefix) {
    const auto productString = GlobalDictionaries::nexradProductString[product];
    return GlobalVariables::tgftpSitePrefix + "/SL.us008001/DF.of/DC.radar/" + productString + "/SI." + ridPrefix + radarSite.toLower() + "/";
}

QString WXGLDownload::getRadarFileUrl(const QString& radarSite, const QString& product, bool isTdwr) {
    const auto ridPrefix = getRidPrefix(radarSite, isTdwr);
    const auto productString = GlobalDictionaries::nexradProductString[product];
    const auto url = nwsRadarPub + "SL.us008001/DF.of/DC.radar/" + productString + "/SI." + ridPrefix + radarSite.toLower() + "/sn.last";
    return url;
}

void WXGLDownload::getRadarFilesForAnimation(QWidget * parent, int frameCount, const QString& product, const QString& radarSite, FileStorage * fileStorage) {
    const auto ridPrefix = getRidPrefix(radarSite, WXGLNexrad::isProductTdwr(product));
    QStringList listOfFiles;
    auto html = UtilityIO::getHtml(getRadarDirectoryUrl(radarSite, product, ridPrefix));
    auto snFiles = UtilityString::parseColumn(html, pattern1);
    auto snDates = UtilityString::parseColumn(html, pattern2);
    if (snDates.size() == 0) {
        html = UtilityIO::getHtml(getRadarDirectoryUrl(radarSite, product, ridPrefix));
        snFiles = UtilityString::parseColumn(html, pattern1);
        snDates = UtilityString::parseColumn(html, pattern2);
    }
    QString mostRecentSn = "";
    const auto mostRecentTime = snDates.back();
    for (auto index : UtilityList::range(snDates.size() - 1)) {
        if (snDates[index] == mostRecentTime) {
            mostRecentSn = snFiles[index];
        }
    }
    const auto seq = To::Int(mostRecentSn.replace("sn.", ""));
    auto index = seq - frameCount + 1;
    for ([[maybe_unused]] auto unused : UtilityList::range(frameCount)) {
        int tmpK = index;
        if (tmpK < 0) {
            tmpK += 251;
        }
        listOfFiles.push_back("sn." + To::StringPadLeftZeros(tmpK, 4));
        index += 1;
    }
    QStringList urlList;
    for (auto i : UtilityList::range(frameCount)) {
        urlList.push_back(getRadarDirectoryUrl(radarSite, product, ridPrefix) + listOfFiles[i]);
    }
    new DownloadParallel(parent, fileStorage, urlList);
}