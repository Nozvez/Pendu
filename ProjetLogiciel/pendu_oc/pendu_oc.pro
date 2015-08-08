#-------------------------------------------------
#
# Project created by QtCreator 2015-08-04T13:57:30
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = pendu_oc
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    settings.cpp \
    stats.cpp \
    dictionnary.cpp \
    game.cpp

HEADERS  += mainwindow.h \
    settings.h \
    stats.h \
    dictionnary.h \
    game.h

FORMS    += mainwindow.ui
