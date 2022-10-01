// *****************************************************************************
// * Copyright (c) 2020, 2021, 2022 joshua.tee@gmail.com. All rights reserved.
// *
// * Refer to the COPYING file of the official project for license.
// *****************************************************************************

#ifndef POPOVERMENU_H
#define POPOVERMENU_H

#include <functional>
#include <string>
#include <vector>
#include <QPushButton>

using std::function;
using std::string;
using std::vector;

class PopoverMenu {
public:
    PopoverMenu(QWidget *, const string&, const vector<string>&, const function<void(string)>&);
    QPushButton * get();

private:
    QPushButton * button;
    QMenu * menu;
};

#endif  // POPOVERMENU_H
