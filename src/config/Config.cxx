#include "Config.hxx"
#include "ui_Config.h"

Config::Config(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Config)
{
    ui->setupUi(this);
    this->setWindowIcon(QIcon(":/icon/icon.png"));
}

Config::~Config()
{
    delete ui;
}

