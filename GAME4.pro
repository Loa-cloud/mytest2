#-------------------------------------------------
#
# Project created by QtCreator 2021-01-22T17:19:50
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GAME4
TEMPLATE = app


SOURCES += main.cpp\
        menu.cpp \
    player.cpp \
    level.cpp \
    widget.cpp \
    bird.cpp \
    backround.cpp \
    submenu.cpp \
    results.cpp \
    results1.cpp

HEADERS  += menu.h \
    player.h \
    level.h \
    widget.h \
    bird.h \
    backround.h \
    submenu.h \
    results.h \
    results1.h

FORMS    += menu.ui \
    player.ui \
    widget.ui \
    submenu.ui \
    level.ui \
    results.ui \
    results1.ui
