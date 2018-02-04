include (../protos/protos.pri)

TEMPLATE = lib
DEFINES += COMMON_BASE_LIBRARY

HEADERS += barbero.h \
           cavallo.h \
           messages.h \
           contrada.h \
           fantino.h \
           giocatore.h \
           partito.h \
           TRandom.h \
           utility.h

SOURCES += barbero.cc \
           cavallo.cc \
           contrada.cc \
           fantino.cc \
           giocatore.cc \
           partito.cc \
           TRandom.cc \
           utility.cc

INCLUDEPATH += \
    /usr/local/include

LIBS += -L/usr/local/lib -lprotobuf

DISTFILES += \
    common.pri

OTHER_FILES += \
    common.pri \
    README.md

VERSION = 1.0.0
