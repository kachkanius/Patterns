TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    Patterns/AbstactFactory.cpp \
    Patterns/FactoryMethod.cpp \
    Patterns/FactoryMethodClassic.cpp \
    Patterns/Singleton.cpp \
    Patterns/Strategy.cpp \
    virtual.cpp \
    factorial.cpp

HEADERS += \
    Patterns/AbstactFactory.h \
    Patterns/FactoryMethod.h \
    Patterns/FactoryMethodClassic.h \
    Patterns/Singleton.h \
    Patterns/Strategy.h \
    virtual.h \
    factorial.h

QMAKE_CXXFLAGS += -std=c++11
QMAKE_CFLAGS += --stack,1024*1024*1024*1024
