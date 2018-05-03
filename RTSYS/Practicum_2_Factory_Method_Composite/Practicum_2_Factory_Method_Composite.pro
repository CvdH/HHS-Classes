TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    operatingsystem.cpp \
    file.cpp \
    directory.cpp \
    simpleoperatingsystem.cpp

HEADERS += \
    operatingsystem.h \
    simpleoperatingsystem.h \
    item.h \
    file.h \
    directory.h
