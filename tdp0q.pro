TEMPLATE = subdirs

SUBDIRS = \
    common \
    clone \
    protos \
    server

message(generating protobuffers...)
MKPROTO = true \
    && cd $$IN_PWD/protos \
    && rm -f *.cc *.h \
    && echo "Working dir: $PWD" \
    && protoc --proto-path=proto_file --cpp_out=. *.proto

protos.target = protos
protos.commands = $$MKPROTO
QMAKE_EXTRA_TARGETS += protos

common.subdir = common protos
clone.subdir = myclone
server.subdir = server myclone protos
protos.subdir = protos

clone.depends = common
server.depends = common clone protos


