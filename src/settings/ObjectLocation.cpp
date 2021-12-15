// *****************************************************************************
// * Copyright (c) 2020, 2021 joshua.tee@gmail.com. All rights reserved.
// *
// * Refer to the COPYING file of the official project for license.
// *****************************************************************************

#include "settings/ObjectLocation.h"
#include "util/To.h"
#include "util/Utility.h"

ObjectLocation::ObjectLocation() {
}

ObjectLocation::ObjectLocation(int locationNumber) {
    locNumAsString = To::String(locationNumber + 1);
    lat = Utility::readPref("LOC" + locNumAsString + "_X", "");
    lon = Utility::readPref("LOC" + locNumAsString + "_Y", "");
    name = Utility::readPref("LOC" + locNumAsString + "_LABEL", "");
    wfo = Utility::readPref("NWS" + locNumAsString, "");
    rid = Utility::readPref("RID" + locNumAsString, "");
    state = Utility::getRadarSiteName(rid).split(",")[0];
}

void ObjectLocation::saveToNewSlot(int newLocNumInt) {
    locNumAsString = To::String(newLocNumInt + 1);
    Utility::writePref("LOC" + locNumAsString + "_X", lat);
    Utility::writePref("LOC" + locNumAsString + "_Y", lon);
    Utility::writePref("LOC" + locNumAsString + "_LABEL", name);
    Utility::writePref("NWS" + locNumAsString, wfo);
    Utility::writePref("RID" + locNumAsString, rid);
}

QString ObjectLocation::getLat() const {
    return lat;
}

QString ObjectLocation::getLon() const {
    return lon;
}

QString ObjectLocation::getName() const {
    return name;
}

QString ObjectLocation::getWfo() const {
    return wfo;
}

QString ObjectLocation::getRadarSite() const {
    return rid;
}
