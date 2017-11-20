TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    AbstactFactory.cpp \
    FactoryMethod.cpp \
    FactoryMethodClassic.cpp

HEADERS += \
    AbstactFactory.h \
    FactoryMethod.h \
    FactoryMethodClassic.h

QMAKE_CXXFLAGS += -std=c++11
