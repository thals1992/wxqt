// *****************************************************************************
// * Copyright (c) 2020, 2021, 2022 joshua.tee@gmail.com. All rights reserved.
// *
// * Refer to the COPYING file of the official project for license.
// *****************************************************************************

#include "nhc/Nhc.h"
#include "objects/FutureBytes.h"
#include "nhc/NhcOceanEnum.h"
#include "nhc/ObjectNhcRegionSummary.h"
#include "util/UtilityList.h"

Nhc::Nhc(QWidget * parent)
    : Window{parent}
    , sw{ ScrolledWindow{this, box} }
{
    setTitle("NHC");
    objectNhc.getTextData();
    objectNhc.showTextData();
    for (const auto& storm : objectNhc.stormDataList) {
        stormCards.push_back(std::make_unique<ObjectCardNhcStormReportItem>(this, storm));
        boxText.addLayout(stormCards.back()->get());
    }
    for (auto region : {ATL, EPAC, CPAC}) {
        addAll(urls, ObjectNhcRegionSummary{region}.urls);
    }
    box.addLayout(boxText.get());
    box.addImageRows(this, urls, images, 3);
    for (auto index : range(urls.size())) {
        new FutureBytes{this, urls[index], [this, index] (const auto& ba) { images[index].setBytes(ba); }};
    }
}
