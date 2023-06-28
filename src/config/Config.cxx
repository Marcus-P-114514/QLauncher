#include "Config.hxx"
#include "ui_Config.h"

Config::Config(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Config)
{
    ui->setupUi(this);
}

Config::~Config()
{
    delete ui;
}

