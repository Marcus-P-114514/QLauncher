#include "Config/Config.hxx"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Config w;
    w.show();
    return a.exec();
}
