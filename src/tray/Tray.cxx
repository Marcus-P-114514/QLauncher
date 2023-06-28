#include "Tray.hxx"
#include "ui_Tray.h"

Tray::Tray(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Tray)
{
    ui->setupUi(this);
}

Tray::~Tray()
{
    delete ui;
}
