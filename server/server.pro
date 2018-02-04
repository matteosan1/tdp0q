include (../common/common.pri)
include (../myclone/myclone.pri)
include (../protos/protos.pri)

QT += core
QT -= gui
TARGET = server

CONFIG += c++11
CONFIG += console
CONFIG -= app_bundle

# Input
HEADERS += \
    tdpalioserver.h \
    tdpalioaiclient.h

SOURCES += \
        main.cpp \
    tdpalioserver.cpp \
    tdpalioaiclient.cpp

INCLUDEPATH += \
    /usr/local/Cellar/zmqpp/4.2.0/include/zmqpp \
    /usr/local/include

VERSION = 1.0.0
