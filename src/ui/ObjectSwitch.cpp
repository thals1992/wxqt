// *****************************************************************************
// * Copyright (c) 2020, 2021, 2022 joshua.tee@gmail.com. All rights reserved.
// *
// * Refer to the COPYING file of the official project for license.
// *****************************************************************************

#include "ui/ObjectSwitch.h"
#include <QString>
#include "objects/WString.h"
#include "settings/RadarPreferences.h"
#include "settings/UIPreferences.h"
#include "util/Utility.h"

ObjectSwitch::ObjectSwitch(QWidget * parent, const string& label, const string& pref, bool defaultValue)
    : QObject(parent)
    , parent{ parent }
    , pref{ pref }
    , defaultValueAsString{ defaultValue ? "true" : "false" }
    , checkBox{ new QCheckBox{QString::fromStdString(label), parent} }
{
    checkBox->setChecked(isTrue());
    connect(checkBox, &QCheckBox::stateChanged, this, [this] { toggle(); });
}

ObjectSwitch * ObjectSwitch::fromPrefBool(QWidget * parent, const PrefBool& prefBool) {
    return new ObjectSwitch{parent, prefBool.label, prefBool.prefToken, prefBool.enabledByDefault};
}

bool ObjectSwitch::isTrue() {
    return WString::startsWith(Utility::readPref(pref, defaultValueAsString), "t");
}

void ObjectSwitch::toggle() {
    if (!isTrue()) {
        Utility::writePref(pref, "true");
    } else {
        Utility::writePref(pref, "false");
    }
    RadarPreferences::initialize();
    UIPreferences::initialize();
}

QWidget * ObjectSwitch::get() {
    return checkBox;
}
