#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "mainwindow.h"
#include "QTimer"
#include "QPainter"
#include "QDebug"
#include "QPaintEvent"
#include "QRectF"
#include "QBrush"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QTimer * updateTimer = new QTimer(this);
    connect(updateTimer, SIGNAL(timeout()), this, SLOT(update()));
    updateTimer->start(100);

}

MainWindow::~MainWindow()
{
    delete ui;

}

void MainWindow::paintEvent(QPaintEvent *e)
{


     QBrush brush(Qt::red);
     QPainter painter(this);
     painter.setPen(Qt::blue);
     painter.setBrush(brush);
     painter.drawEllipse(QPointF(x,y), 30, 30);

    qDebug()<<"Lotooooooooo";

    x+=5;y+=10;

}

void MainWindow::mover(int x)
{
    //if (x;

}








