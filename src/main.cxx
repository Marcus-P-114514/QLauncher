#include "config/Config.hxx"
#include "backend/Backend.hxx"

#include "QApplication"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QApplication::setQuitOnLastWindowClosed(false);

    Backend * backendHelper = new Backend;
    backendHelper->initTray();

    return a.exec();
}
