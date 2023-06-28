#include "config/Config.hxx"
#include "tray/Tray.hxx"

#include "QApplication"
#include "QSystemTrayIcon"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QSystemTrayIcon * trayIcon = new QSystemTrayIcon;
    trayIcon->setIcon(QIcon(":/icon/icon.png"));
    trayIcon->show();

    Config w;
    w.show();

    Tray t;
    t.show();
    return a.exec();
}
