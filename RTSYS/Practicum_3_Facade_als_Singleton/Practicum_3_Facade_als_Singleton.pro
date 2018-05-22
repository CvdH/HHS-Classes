TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    subsystem.cpp \
    libraryfacadeimpl.cpp

HEADERS += \
    subsystem.h \
    libraryfacade.h \
    libraryfacadeimpl.h
