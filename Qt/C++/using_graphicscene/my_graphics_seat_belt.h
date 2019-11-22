#ifndef MY_GRAPHICS_SEAT_BELT_H
#define MY_GRAPHICS_SEAT_BELT_H
#include <my_graphics_item.h>


class my_graphics_seat_belt : public my_graphics_item
{
public:
    my_graphics_seat_belt();
    QRectF boundingRect() const;

    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,
               QWidget *widget);

};

#endif // MY_GRAPHICS_SEAT_BELT_H
