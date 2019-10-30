#include "mainwindow.h"
#include <QApplication>
#include <QApplication>
#include "QSqlDatabase"
#include "QSqlTableModel"
#include "QSqlQuery"
#include "QString"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("/home/utilisateur/insee.db");
    bool ok = db.open();








    MainWindow w;
    w.show();

    return a.exec();
}
