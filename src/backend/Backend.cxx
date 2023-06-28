#include "Backend.hxx"

void Backend::initTray(){
    QSystemTrayIcon * trayIcon = new QSystemTrayIcon;
    trayIcon->setIcon(QIcon(":/icon/icon.png"));
    connect(trayIcon, &QSystemTrayIcon::activated, this, &Backend::trayActivated);
    trayIcon->show();
}

void Backend::updateMenuPosition(QPoint position){
    int correctX = position.x() - 199;
    int correctY = position.y() - 246;
    QPoint tempMousePoint(correctX, correctY);
    correctMenuPosition = tempMousePoint;
}

void Backend::trayActivated(QSystemTrayIcon::ActivationReason pressStatus){
    Tray * trayHelper = new Tray;
    updateMenuPosition(QCursor::pos());
    trayHelper->move(correctMenuPosition);
    trayHelper->show();
}
