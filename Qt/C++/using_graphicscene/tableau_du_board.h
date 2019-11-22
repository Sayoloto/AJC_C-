#ifndef TABLEAU_DU_BOARD_H
#define TABLEAU_DU_BOARD_H
#include <my_graphics_item.h>
#include <QGraphicsEllipseItem>


class tableau_du_board : public my_graphics_item
{
public:
    tableau_du_board();
    QGraphicsEllipseItem tachometre()const;
    QRectF boundingRect() const;
    void paint(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget);
};

#endif // TABLEAU_DU_BOARD_H
