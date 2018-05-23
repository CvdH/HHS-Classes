TEMPLATE = app
CONFIG += console
CONFIG += c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    main.cpp \
    audioinstallatie.cpp \
    cdspeler.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    audioinstallatie.h \
    cdspeler.h

