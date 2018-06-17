TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    observer.cpp \
    match.cpp \
    observerimpl.cpp \
    factoryimpl.cpp \
    robot.cpp \
    klaar.cpp \
    zwervend.cpp \
    aanvallend.cpp \
    verloren.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    observer.h \
    match.h \
    observerimpl.h \
    factory.h \
    factoryimpl.h \
    robot.h \
    state.h \
    klaar.h \
    zwervend.h \
    aanvallend.h \
    verloren.h

