#ifndef MYPUSHBUTTON_H
#define MYPUSHBUTTON_H

#include "QPushButton"
#include "mainwindow.h"

class mypushbutton :public QPushButton
{

    Q_OBJECT
public:
    mypushbutton(QWidget *parent=0);

private:

    void mouseDoubleClickEvent(QMouseEvent *event);

signals:
        void clicking();
};

#endif // MYPUSHBUTTON_H
