TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    analogemeter.cpp \
    digitalemeter.cpp \
    borderdecorator.cpp \
    voortextdecorator.cpp \
    natextdecorator.cpp

HEADERS += \
    meter.h \
    analogemeter.h \
    digitalemeter.h \
    borderdecorator.h \
    voortextdecorator.h \
    snelheid.h \
    natextdecorator.h
