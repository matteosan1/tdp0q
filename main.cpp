#include <QCoreApplication>

#include "broker.h"
#include "node.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Broker b;
    Node mw;

    return a.exec();
}

