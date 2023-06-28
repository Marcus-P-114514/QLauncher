#include "Config.hxx"
#include "ui_Config.h"
#include "QSystemTrayIcon"

Config::Config(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Config)
{
    ui->setupUi(this);
    this->setWindowIcon(QIcon(":/icon/icon.png"));

    Backend * backendHelper = new Backend;
    ui->qtCreatorLocation->setText(backendHelper->readQtCreatorPath());
    ui->scaleFactorEdit->setCurrentText(backendHelper->readScaleFactor());
}

Config::~Config()
{
    delete ui;
}


void Config::on_saveConfig_clicked()
{
    Backend * backendHelper = new Backend;
    backendHelper->updatePath(ui->qtCreatorLocation->text());
    backendHelper->updateScaleFactor(ui->scaleFactorEdit->currentText());
    this->hide();
}

