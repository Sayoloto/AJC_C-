#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QSqlDatabase"
#include "QSqlTableModel"
#include "QModelIndex"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QSqlTableModel *model = new QSqlTableModel();

    model->setTable("communes");

    model->select();
    ui->tableView->setModel(model);
    ui->tableView->setModel(model);
    connect(ui->tableView,SIGNAL(pressed(QModelIndex)),
    this, SLOT (Afficheinfo(QModelIndex)));
    connect(ui->lineEdit,SIGNAL(pressed(QModelIndex)),
    this, SLOT (Afficheinfo(QModelIndex)));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::Afficheinfo(QModelIndex ind)
{
    QString val;
    val=ind.data().toString();

   int rows;
   rows = ind.row();
   //val= ind.row().toString();
   ui->lineEdit->setText(val);
}
