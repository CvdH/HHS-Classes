TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    ../Practicum 1_ Layers/Laag1Impl.cpp \
    Laag1Impl.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    ../Practicum 1_ Layers/laag1.h \
    ../Practicum 1_ Layers/laag2.h \
    ../Practicum 1_ Layers/laag3.h \
    laag1.h \
    laag2.h \
    laag3.h

