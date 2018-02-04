TEMPLATE = lib
DEFINES += PROTOS_BASE_LIBRARY

message(generating protobuffers...)

MKPROTO = true \
    && cd $$IN_PWD/protos \
    && rm -f *.cc *.h \
    && echo "Working dir: $PWD" \
    && protoc --proto-path=proto_file --cpp_out=. *.proto
protos.target = protos
protos.commands = $$MKPROTO
QMAKE_EXTRA_TARGETS += protos

HEADERS += \
    *.h

SOURCES += \
    *.cc

OTHER_FILES += \
    README.md \
    protos.pri \
    proto_file/*.proto

INCLUDEPATH += /usr/local/include
LIBS += -L/usr/local/lib -lprotobuf

DISTFILES += \
    protos.pri \
    proto_file/players.proto \
    proto_file/horses.proto \
    proto_file/jockeys.proto \
    proto_file/contrada.proto

VERSION = 1.0.0
