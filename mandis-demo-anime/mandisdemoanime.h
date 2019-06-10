#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_mandisdemoanime.h"

#include <qpushbutton.h>


class mandisdemoanime : public QMainWindow
{
    Q_OBJECT

public:
    mandisdemoanime(QWidget *parent = Q_NULLPTR);


private:
    Ui::mandisdemoanimeClass ui;
    QPushButton *settingsButton = nullptr;
    QPushButton *startButton = nullptr;
    QDialog *settingsDialog = nullptr;
    int runningStatus = false;



private slots:
    void onSettings();
    void onStart();
};
