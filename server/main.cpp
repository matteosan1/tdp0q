#include <QCoreApplication>

#include "tdpalioserver.h"

#include <iostream>

int main(int argc, char *argv[]) {

    QCoreApplication app(argc, argv);

    TDPalioServer server;

    return app.exec();
}
