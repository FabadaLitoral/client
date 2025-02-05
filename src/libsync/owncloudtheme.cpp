/*
 * Copyright (C) by Klaas Freitag <freitag@owncloud.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 */

#include "owncloudtheme.h"

#include <QString>
#include <QVariant>
#ifndef TOKEN_AUTH_ONLY
#include <QPixmap>
#include <QIcon>
#endif
#include <QCoreApplication>

#include "config.h"
#include "common/utility.h"
#include "version.h"

namespace OCC {

ownCloudTheme::ownCloudTheme()
    : Theme()
{
}

#ifndef TOKEN_AUTH_ONLY
QColor ownCloudTheme::wizardHeaderBackgroundColor() const
{
    /* ************** EducaMadrid ************* */
    // return QColor(4, 30, 66);z
    return QColor(38, 43, 55);
    /* ************** EducaMadrid ************* */
    
}

QColor ownCloudTheme::wizardHeaderTitleColor() const
{
    return Qt::white;
}

QColor ownCloudTheme::wizardHeaderSubTitleColor() const
{
    return QColor(78, 133, 200);
}

QIcon ownCloudTheme::wizardHeaderLogo() const
{
    return themeUniversalIcon(QStringLiteral("wizard_logo"));
}

QIcon ownCloudTheme::aboutIcon() const
{
    return themeUniversalIcon(QStringLiteral("oc-image-about"));
}

#endif
}
