#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "myplaintext.h"
#include <QDebug>
#include "mypushbutton.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton, SIGNAL(clicking()), this, SLOT(clicking_action()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *event)
{
    //qDebug()<<this->width()<<this->height();
}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    if (event->pos().y() > this->height()-30)
    {
        qDebug()<< "on est en bas de ecran";
    }

    if (event->pos().y() < this->height()+30)
    {
        qDebug()<< "on est en sous de ecran";
    }
}

void MainWindow::clicking_action()
{
    qDebug()<< "Loto is the best";
}




