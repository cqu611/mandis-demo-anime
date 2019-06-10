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

    settingsButton = new QPushButton(this);
    settingsButton->setText(i18nSettings);
    settingsButton->setStyleSheet(SETTINGS_BUTTON_STYLE_SHEET);
    //settingsButton->resize(60, 60);
    settingsButton->setGeometry(1, 1, 60, 60);
    settingsButton->show();

    startButton = new QPushButton(this);
    startButton->setText(i18nStart);
    startButton->setStyleSheet(START_BUTTON_STYLE_SHEET);
    startButton->setGeometry(1, 62, 60, 60);
    startButton->show();

    settingsDialog = new QDialog(this);
    settingsDialog->setWindowTitle("Settings");
    settingsDialog->setFixedSize(400, 300);
    settingsDialog->hide();

    connect(settingsButton, SIGNAL(clicked()), this, SLOT(onSettings()));
    connect(startButton, SIGNAL(clicked()), this, SLOT(onStart()));
}

void mandisdemoanime::onSettings() {
    if (settingsDialog->isHidden())
        settingsDialog->show();
    else
        settingsDialog->hide();
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