#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMenu"
#include "QAction"
#include "QCloseEvent"
#include "dialog.h"
#include "QString"
#include "QFileDialog"
#include "QByteArray"
#include "QUrl"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect (ui->actionQuitter,SIGNAL(triggered(bool)),this,SLOT(Quitter()));
    connect (ui->actionAbout,SIGNAL(triggered(bool)),this,SLOT(Aide()));
    connect(ui->actionOuvrir_2,SIGNAL(triggered(bool)), this, SLOT(Ouvrir()));
    //connect(ui->action_etc_passwd,SIGNAL(triggered(bool)),this SLOT(last_file()));

    //ui->label->setStyleSheet(":/photo/Capture d’écran de 2019-10-15 14-55-34.png");

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Quitter()
{
    close();
}

void MainWindow::Ouvrir()
{
    QString fileName = QFileDialog::getOpenFileName(this,
    QString("Ouvrir une text file"), QDir::homePath(),
    "All Files (*)");

    QFile file(fileName);
         if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
             return;
    QByteArray line = file.readAll();
    int j=8; 0/j;
    qDebug()<<0/j;

    ui->textEdit->setText(line);
    //process_line(line);

}

void MainWindow::Aide()
{
    Dialog d(this);
    d.exec();
}

//void MainWindow::last_file()
//{}
