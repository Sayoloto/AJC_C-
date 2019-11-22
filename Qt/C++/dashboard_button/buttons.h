#ifndef BUTTONS_H
#define BUTTONS_H
#include "QPaintDevice"
#include "QColor"
#include "QGraphicsItem"
#include "qpainter.h"
#include "QPaintEvent"
#include "QBrush"

// Here is a class that will control the button actions
// methods: Blinking(), light_ON(), light_OFF()
// All possible buttons (itmes that can use this class) ::
//Essuie glace, Engine Start/Stop, Drive-Drirection, A/C, Front_View_Lights,
// Rear_View_Lights, Door_Lock_Option,
class Buttons : public QGraphicsItem
{
public:
    Buttons();
    void setState(bool state);
    void toggle();
    void setOnColor(QColor onColor);
    void setOffColor(QColor offColor);

private:
    bool lights;
    QColor displayOnColor;
    QColor displayOffColor;
    Qt::BrushStyle displayOnPattern;
    Qt::BrushStyle displayOffPattern;

private slots:


protected:
    void paintEvent(QPaintEvent *);

};

#endif // BUTTONS_H
