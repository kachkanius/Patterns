TEMPLATE = lib
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

TEMPLATE = lib
CONFIG += c++11 -qt=qt5
CONFIG += sharedlib
TARGET = Singleton

SOURCES += *.cpp 
HEADERS += *.h

