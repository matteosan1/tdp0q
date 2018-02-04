include (../common/common.pri)

TEMPLATE = lib

DEFINES += CLONE_BASE_LIBRARY

SOURCES += \
    client.cpp \
    server.cpp

HEADERS += \
    client.h \
    server.h

INCLUDEPATH += \
    /usr/local/Cellar/zmqpp/4.2.0/include/zmqpp \
    /usr/local/include/

DISTFILES += \
    myclone.pri

OTHER_FILES += \
    myclone.pri \
    README.md

LIBS += \
    -L/usr/local/lib

LIBS += -lzmqpp -lzmq

