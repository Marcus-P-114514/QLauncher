﻿#include "Backend.hxx"

void Backend::initTray(){
    QSystemTrayIcon * trayIcon = new QSystemTrayIcon;
    trayIcon->setIcon(QIcon(":/icon/icon.png"));
    connect(trayIcon, &QSystemTrayIcon::activated, this, &Backend::trayActivated);
    trayIcon->show();
}

void Backend::updateMenuPosition(QPoint position){
    int correctX = position.x() - 199;
    //int correctY = position.y() - 246;
    int correctY = position.y() - 200;
    QPoint tempMousePoint(correctX, correctY);
    correctMenuPosition = tempMousePoint;
}

void Backend::trayActivated(QSystemTrayIcon::ActivationReason pressStatus){
    switch(pressStatus){
        case QSystemTrayIcon::DoubleClick:
            startQtCreator(readQtCreatorPath(), readScaleFactor());

        default:
            Tray * trayHelper = new Tray;
            updateMenuPosition(QCursor::pos());
            trayHelper->move(correctMenuPosition);
            trayHelper->show();
    }
}

QString Backend::readQtCreatorPath(){
    QSettings *configRead = new QSettings("./config/path.conf", QSettings::IniFormat);
    QString tempPath = configRead->value("Default/QtCreatorPath").toString();
    delete configRead;

    return tempPath;
}

QString Backend::readScaleFactor(){
    QSettings *configRead = new QSettings("./config/path.conf", QSettings::IniFormat);
    QString tempPath = configRead->value("Default/QtScaleFactor").toString();
    delete configRead;

    return tempPath;
}

void Backend::updatePath(QString qtCreatorLocation){
    QSettings *configRead = new QSettings("./config/path.conf", QSettings::IniFormat);
    configRead->setValue("Default/QtCreatorPath", qtCreatorLocation);
    delete configRead;
}

void Backend::updateScaleFactor(QString scaleFactor){
    QSettings *configRead = new QSettings("./config/path.conf", QSettings::IniFormat);
    configRead->setValue("Default/QtScaleFactor", scaleFactor);
    delete configRead;
}

void Backend::startQtCreator(QString location, QString scaleFactor){
    QFile updateScript("./cache/script.cmd");
    updateScript.open(QIODevice::ReadWrite);
    QString scriptContent = "set QT_SCALE_FACTOR=" + scaleFactor + "\n start " + location;
    updateScript.write(scriptContent.toUtf8());
    updateScript.close();
    QProcess launcherProcess(0);
    launcherProcess.start("./cache/script.cmd");
    launcherProcess.waitForStarted();
    launcherProcess.waitForFinished();
}
