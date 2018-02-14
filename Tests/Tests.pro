#-------------------------------------------------
#
# Project created by QtCreator 2018-01-31T19:04:43
#
#-------------------------------------------------
QT += core gui testlib network

CONFIG += c++11 -qt=qt5
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = tests
TEMPLATE = app

INCLUDEPATH += $$PWD/../Singleton

SOURCES += main.cpp


LIBS += -L$$PWD/../build/Singleton -lsingleton

HEADERS += \
    singletontest.h
