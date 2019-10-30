#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDate>
#include <QString>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->spinBox, SIGNAL(valueChanged(int)),this, SLOT(add_days()));
    connect(ui->dateEdit, SIGNAL(dateChanged()), this, SLOT(add_days_input()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::add_days()
{
    QDate newdate;

    newdate = ui->dateEdit->date().addDays(ui->spinBox->value());
    qDebug()<<newdate;

    ui->label->setText(newdate.toString());

}

void MainWindow::add_days_input()
{
    QDate newdate_input;

    newdate_input = ui->dateEdit->date();
    qDebug()<<newdate_input;


    ui->label->setText(newdate_input.toString());

}

