#include "SimplySSH.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SimplySSH w;
    w.show();
    return a.exec();
}
