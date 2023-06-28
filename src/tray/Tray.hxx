#ifndef TRAY_HXX
#define TRAY_HXX

#include <QWidget>

namespace Ui {
class Tray;
}

class Tray : public QWidget
{
    Q_OBJECT

public:
    explicit Tray(QWidget *parent = nullptr);
    ~Tray();

private:
    Ui::Tray *ui;
};

#endif // TRAY_HXX
