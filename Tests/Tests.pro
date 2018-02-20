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

SOURCES += main.cpp

INCLUDEPATH +=  $$PWD/../Singleton \
                $$PWD/../Bridge \
                $$PWD/../State \
                $$PWD/../Flyweight \

LIBS += -L$$PWD/../build/Singleton -lSingleton
LIBS += -L$$PWD/../build/Bridge -lBridge
LIBS += -L$$PWD/../build/State -lState
LIBS += -L$$PWD/../build/Flyweight -lFlyweight


HEADERS += \
    singletontest.h \
    bridgetest.h \
    statetest.h \
    flyweighttest.h
