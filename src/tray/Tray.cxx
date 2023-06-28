#include "Tray.hxx"
#include "ui_Tray.h"

Tray::Tray(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Tray)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
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

