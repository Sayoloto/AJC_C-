#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
   connect (ui->lineEdit,SIGNAL(editingFinished()),
     this,SLOT(AFFICHAGE()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::AFFICHAGE()
{

    qDebug()<<"Bonjour"<< ui->lineEdit->text().toUpper()<<endl;

}
