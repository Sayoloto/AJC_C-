#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QSqlDatabase"
#include "QModelIndex"
#include "QSqlQuery"
#include "QStringListModel"
#include "QComboBox"
#include "QDebug"
#include "QSqlQueryModel"
#include "qsqltablemodel.h"



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QSqlQuery my_query;
    my_query.exec("SELECT DISTINCT dep FROM communes");
    QStringList dep_list;
    while (my_query.next()) {
              QString department = my_query.value(0).toString();
              dep_list.append(department);
              //qDebug() << dep_list;
          }
   ui->comboBox->addItems(dep_list);

    //table pour toutes les communes
   QSqlTableModel *model_table = new QSqlTableModel();
   model_table->setTable("communes");
   model_table->select();
   ui->tableView->setModel(model_table);

   //QueryQueryModel to display commune

   //QueryModelling


   connect(ui->comboBox, SIGNAL(currentTextChanged(QString)), this, SLOT(dep_selector()));





}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::dep_selector()
{   QString dept;
    dept= ui->comboBox->currentText();
    QSqlQuery my_query2;
    my_query2.exec("SELECT * FROM communes WHERE dep= '"+dept+"'");
    QSqlQueryModel *model = new QSqlQueryModel(this);
    model->setQuery(my_query2);
    ui->tableView->setModel(model);
}
