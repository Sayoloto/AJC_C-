#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setOrganizationDomain("Loto");
    a.setApplicationName("exosetting");
    MainWindow w;
    w.show();

    return a.exec();
}
