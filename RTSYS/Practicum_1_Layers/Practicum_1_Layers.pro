TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    l3impl.cpp \
    l2impl.cpp \
    l1impl.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += laag1.h \
    laag2.h \
    laag3.h

