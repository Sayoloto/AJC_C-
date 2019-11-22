#ifndef MY_GRAPHICS_ITEM_H
#define MY_GRAPHICS_ITEM_H
#include "QGraphicsItem"
#include "QPainter"


class my_graphics_item : public QGraphicsItem
{
public:
    my_graphics_item();

    QRectF boundingRect() const;
    void paint(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget);
    void vitesse_gauge();

};

#endif // MY_GRAPHICS_ITEM_H
