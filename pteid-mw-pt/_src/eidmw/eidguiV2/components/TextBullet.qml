/*-****************************************************************************

 * Copyright (C) 2017 Adriano Campos - <adrianoribeirocampos@gmail.com>
 *
 * Licensed under the EUPL V.1.2

****************************************************************************-*/

import QtQuick 2.6

import "../scripts/Constants.js" as Constants

Item {
    width: 2 * Constants.SIZE_TEXT_LIST_BULLET
    Rectangle {
        width: Constants.SIZE_TEXT_LIST_BULLET
        height: Constants.SIZE_TEXT_LIST_BULLET
        color: Constants.COLOR_TEXT_BODY
        radius: width * 0.5
        y: Constants.SIZE_TEXT_BODY - Constants.SIZE_TEXT_LIST_BULLET - 2
    }
}
