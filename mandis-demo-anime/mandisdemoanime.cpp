#include "mandisdemoanime.h"
#include <sstream>
#include <qdesktopwidget.h>
#include <qdialog.h>
#include "style-sheet.h"
#include "i18n.h"

mandisdemoanime::mandisdemoanime(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    this->resize(1280, 720);
    this->setMinimumSize(1280, 720);
    this->setWindowTitle("Mandis Demonstration Animation");
    this->showMaximized();
    //this->setWindowFlags(this->windowFlags() & ~Qt::WindowMaximizeButtonHint);
    //this->setFixedSize(QApplication::desktop()->width(), QApplication::desktop()->height());

    //settingsButton = new QPushButton(this);
    //settingsButton->setText(i18nSettings);
    //settingsButton->setStyleSheet(SETTINGS_BUTTON_STYLE_SHEET);
    //settingsButton->resize(60, 60);
    //settingsButton->setGeometry(1, 1, 60, 60);
    //settingsButton->show();

    startButton = new QPushButton(this);
    startButton->setText(i18nStart);
    startButton->setStyleSheet(START_BUTTON_STYLE_SHEET);
    startButton->setGeometry(1, 1, 60, 60);
    startButton->show();

    //this->statusBar()->showMessage("aaaaaaaaaaaaaaaaaaa",10000);

    //settingsDialog = new QDialog(this);
    //settingsDialog->setWindowTitle("Settings");
    //settingsDialog->setFixedSize(400, 300);
    //settingsDialog->setWindowFlags(Qt::FramelessWindowHint);
    //QPalette pl = settingsDialog->palette();
    //pl.setColor(QPalette::Window, QColor(255, 255, 255));
    //settingsDialog->setPalette(pl);
    //settingsDialog->setAutoFillBackground(true);
    //settingsDialog->setWindowOpacity(0.7);
    //settingsDialog->setAttribute(Qt::WA_OpaquePaintEvent, true);
    //settingsDialog->setAttribute(Qt::WA_TranslucentBackground, true);
    //settingsDialog->hide();

    nodeCountSpin = new QSpinBox(this);
    nodeCountSpin->setRange(1, 99);
    nodeCountSpin->setValue(20);
    nodeCountSpin->setStyleSheet(SPINBOX_STYLE_SHEET);
    nodeCountSpin->setGeometry(1, 61, 60, 60);
    nodeCountSpin->setAlignment(Qt::AlignCenter);
    nodeCountSpin->show();

    groupCountSpin = new QSpinBox(this);
    groupCountSpin->setRange(1, 10);
    groupCountSpin->setValue(4);
    groupCountSpin->setStyleSheet(SPINBOX_STYLE_SHEET);
    groupCountSpin->setGeometry(1, 121, 60, 60);
    groupCountSpin->setAlignment(Qt::AlignCenter);
    groupCountSpin->show();

    connect(startButton, SIGNAL(clicked()), this, SLOT(onStart()));
}

void mandisdemoanime::onStart() {
    if (!runningStatus) {
        runningStatus = true;
        startButton->setText(i18nStop);
    }
    else {
        runningStatus = false;
        startButton->setText(i18nStart);
    }
}