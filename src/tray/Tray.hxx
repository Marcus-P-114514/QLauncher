﻿#ifndef TRAY_HXX
#define TRAY_HXX

#include "QWidget"
#include "QGraphicsDropShadowEffect"
#include "../config/Config.hxx"
#include "../backend/Backend.hxx"

namespace Ui {
class Tray;
}

class Tray : public QWidget
{
    Q_OBJECT

public:
    explicit Tray(QWidget *parent = nullptr);
    ~Tray();

private slots:
    void on_quitApp_clicked();

    void on_hideApp_clicked();

    void on_openSettings_clicked();

    void on_launchQtDesigner_clicked();

    void on_launchQtCreator_clicked();

private:
    Ui::Tray *ui;
};

#endif // TRAY_HXX
