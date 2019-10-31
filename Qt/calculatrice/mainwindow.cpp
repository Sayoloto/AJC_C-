#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"
#include "QButtonGroup"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(checked_value()));
    connect(ui->pushButton_2,SIGNAL(clicked(bool)),this,SLOT(checked_value()));
    connect(ui->pushButton_3,SIGNAL(clicked(bool)),this,SLOT(checked_value()));
    connect(ui->pushButton_4,SIGNAL(clicked(bool)),this,SLOT(checked_value()));
    connect(ui->pushButton_5,SIGNAL(clicked(bool)),this,SLOT(checked_value()));
    connect(ui->pushButton_6,SIGNAL(clicked(bool)),this,SLOT(checked_value()));
    connect(ui->pushButton_7,SIGNAL(clicked(bool)),this,SLOT(checked_value()));
    connect(ui->pushButton_8,SIGNAL(clicked(bool)),this,SLOT(checked_value()));
    connect(ui->pushButton_9,SIGNAL(clicked(bool)),this,SLOT(checked_value()));
    connect(ui->pushButton_10,SIGNAL(clicked(bool)),this,SLOT(checked_value()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::checked_value()
{
   qDebug()<<"coucocu";
   QString push_content;
   push_content = ui->pushButton->findChild();

}

void MainWindow::addditions()
{

}

void MainWindow::substractions()
{

}


