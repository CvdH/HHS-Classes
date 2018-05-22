TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    audioinstallatie.cpp \
    cdspeler.cpp \
    stopped.cpp \
    playing.cpp \
    paused.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    audioinstallatie.h \
    cdspeler.h \
    state.h \
    stopped.h \
    playing.h \
    paused.h

