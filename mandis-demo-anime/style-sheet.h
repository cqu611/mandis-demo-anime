#pragma once

const char * LABEL_STYLE_SHEET = "\
QLabel {\
    background-color:rgba(60,60,60,5);\
    border-radius:30px;\
    font-size:20px;\
    color:rgba(0,0,0,30);\
}\
QLabel:hover {\
    background-color:rgba(60,60,60,30);\
    font-size:25px;\
    color:rgba(0,0,0,100);\
}\
QLabel:pressed {\
    background-color:rgba(60,60,60,90);\
    color:rgba(0,0,0,255);\
    border-width:1;\
    border-color:rgba(60,60,60,255);\
    border-style:solid;\
}";

const char * START_BUTTON_STYLE_SHEET = "\
QPushButton {\
    background-color:rgba(60,60,60,5);\
    border-radius:30px;\
    font-size:20px;\
    color:rgba(0,0,0,30);\
}\
QPushButton:hover {\
    background-color:rgba(60,60,60,30);\
    font-size:25px;\
    color:rgba(0,0,0,100);\
}\
QPushButton:pressed {\
    background-color:rgba(60,60,60,90);\
    color:rgba(0,0,0,255);\
    border-width:1;\
    border-color:rgba(60,60,60,255);\
    border-style:solid;\
}";

const char * SPINBOX_STYLE_SHEET = "\
QSpinBox {\
    background-color:rgba(60,60,60,0);\
    border-radius:30px;\
    font-size:20px;\
    color:rgba(0,0,0,30);\
}\
QSpinBox:hover {\
    background-color:rgba(60,60,60,30);\
    font-size:25px;\
    color:rgba(0,0,0,100);\
}\
QSpinBox:pressed {\
    background-color:rgba(60,60,60,90);\
    color:rgba(0,0,0,255);\
    border-width:1;\
    border-color:rgba(60,60,60,255);\
    border-style:solid;\
}\
QSpinBox:up-button {\
    subcontrol-origin:border;\
    subcontrol-position:right;\
}\
QSpinBox:down-button {\
    subcontrol-origin:border;\
    subcontrol-position:left;\
}\
QSpinBox:item {\
    color:rgba(0,0,0,100);\
}";
