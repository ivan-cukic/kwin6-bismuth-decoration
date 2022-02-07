// SPDX-FileCopyrightText: 2022 Mikhail Zolotukhin <mail@genda.life>
// SPDX-License-Identifier: MIT

#pragma once

#include <QJSValue>
#include <QQmlEngine>


namespace PlasmaApi
{
struct Workspace {
    Workspace(const QJSValue &jsRepr, QQmlEngine *engine);

    int currentDesktop();



private:
    QJSValue m_jsRepr;
    QQmlEngine *m_engine;
};

}