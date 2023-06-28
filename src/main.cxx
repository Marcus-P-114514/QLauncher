#include "config/Config.hxx"
#include "tray/Tray.hxx"

#include "QApplication"
#include "QSystemTrayIcon"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QApplication::setQuitOnLastWindowClosed(false);

    QSystemTrayIcon * trayIcon = new QSystemTrayIcon;
    trayIcon->setIcon(QIcon(":/icon/icon.png"));
    trayIcon->show();

    Tray t;
    t.show();
    return a.exec();
}
