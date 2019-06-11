#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_mandisdemoanime.h"
#include <qlabel.h>
#include <qpushbutton.h>
#include <qspinbox.h>


class mandisdemoanime : public QMainWindow
{
    Q_OBJECT

public:
    mandisdemoanime(QWidget *parent = Q_NULLPTR);


private:
    Ui::mandisdemoanimeClass ui;
    QPushButton *startButton = nullptr;
    int runningStatus = false;

    QSpinBox *nodeCountSpin = nullptr;
    QSpinBox *groupCountSpin = nullptr;
    

private slots:
    void onStart();
};
