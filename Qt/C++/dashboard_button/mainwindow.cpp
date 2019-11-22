#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "buttons.h"
#include "qpushbutton.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


}

MainWindow::~MainWindow()
{
    delete ui;
}
