//
// Created by 郝进 on 2018/1/7.
//

#include "Wall.h"
#include <QPainter>
#include <QPixmap>
#include <QRectF>
void wall::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) {
//    Q_UNUSED(option);
//    Q_UNUSED(widget);
//    painter->setBrush(Qt::red);
//    painter->drawRect(0,0,20,20);
//    //painter->drawPixmap(0,0,tankPix);
    painter->drawPixmap(boundingRect().topLeft(),wallPix);

}
QPainterPath wall::shape() const{
    QPainterPath bullets;
    bullets.addRect(this->boundingRect());
    return bullets;
}

QRectF wall::boundingRect() const {
    qreal adjust = 0;
    return {-wallPix.width()/2 - adjust,-wallPix.height()/2-adjust,wallPix.width()+ adjust*2,wallPix.height()+2*adjust};
}