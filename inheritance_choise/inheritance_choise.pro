TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    worker.cpp

HEADERS += \
    abstract.h \
    polar.h \
    itotec.h \
    worker.h

