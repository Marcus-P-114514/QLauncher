#ifndef CONFIG_H
#define CONFIG_H

#include "QMainWindow"
#include "../backend/Backend.hxx"

QT_BEGIN_NAMESPACE
namespace Ui { class Config; }
QT_END_NAMESPACE

class Config : public QMainWindow
{
    Q_OBJECT

public:
    Config(QWidget *parent = nullptr);
    ~Config();

private slots:
    void on_saveConfig_clicked();

private:
    Ui::Config *ui;
};
#endif // CONFIG_H
