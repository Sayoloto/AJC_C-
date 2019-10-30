#include "myplaintext.h"
#include "QPlainTextEdit"
#include <QMenu>
#include <QDebug>


myplaintext::myplaintext(QWidget *parent): QPlainTextEdit(parent)
{

}

void myplaintext::contextMenuEvent(QContextMenuEvent *event)
{
    QMenu *menu = createStandardContextMenu();
    QAction *action = new QAction("print coucou en terminal",this);
    menu->addAction(action);
    connect (action,SIGNAL(triggered(bool)), this,SLOT(print()));
    menu->exec(event->globalPos());
}

void myplaintext::print()
{
    qDebug()<<"coucou";
}

