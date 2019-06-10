#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_mandisdemoanime.h"

class mandisdemoanime : public QMainWindow
{
    Q_OBJECT

public:
    mandisdemoanime(QWidget *parent = Q_NULLPTR);

private:
    Ui::mandisdemoanimeClass ui;
};
