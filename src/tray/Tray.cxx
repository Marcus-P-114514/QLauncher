#include "Tray.hxx"
#include "ui_Tray.h"

Tray::Tray(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Tray)
{
    ui->setupUi(this);

    setWindowFlags(Qt::FramelessWindowHint);
    setAttribute(Qt::WA_TranslucentBackground);

    QGraphicsDropShadowEffect *menuShadow = new QGraphicsDropShadowEffect(ui->menuContainer);
    menuShadow->setColor(QColor("#DFD7BF"));
    menuShadow->setOffset(0, 0);
    menuShadow->setBlurRadius(16);
    ui->menuContainer->setGraphicsEffect(menuShadow);
    this->setContentsMargins(10,10,10,10);
}

Tray::~Tray()
{
    delete ui;
}

void Tray::on_quitApp_clicked()
{
    QApplication::exit();
}


void Tray::on_hideApp_clicked()
{
    this->hide();
}


void Tray::on_openSettings_clicked()
{
    Config * configWindow = new Config;
    configWindow->show();
}

