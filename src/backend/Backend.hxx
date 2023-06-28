#ifndef BACKEND_HXX
#define BACKEND_HXX

#include "QWidget"
#include "QPoint"
#include "QCursor"
#include "QSystemTrayIcon"
#include "../tray/Tray.hxx"

class Backend : public QWidget
{
    Q_OBJECT

private:
    QPoint correctMenuPosition;

public:

    void initTray();

    void updateMenuPosition(QPoint position);

    void trayActivated(QSystemTrayIcon::ActivationReason pressStatus);

signals:

};

#endif // BACKEND_HXX
