TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    progressbar.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    progressbar.h

