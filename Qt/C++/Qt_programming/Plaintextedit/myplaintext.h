#ifndef MYPLAINTEXT_H
#define MYPLAINTEXT_H
#include "QPlainTextEdit"
#include "QContextMenuEvent"
#include "mainwindow.h"

class myplaintext: public QPlainTextEdit
{
Q_OBJECT
public:
    myplaintext(QWidget *parent=0);

    void contextMenuEvent(QContextMenuEvent *event);

private slots:

    void print();
};


#endif // MYPLAINTEXT_H
