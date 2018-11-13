//
// Created by 郝进 on 2018/1/6.
//

#include "Bullet.h"
#include <QPainter>
#include <cmath>
#include <QGraphicsScene>
#include <QGraphicsView>
#include "Common.h"
#include <QList>
#include <QDebug>
#include <QPainterPath>
static const auto PI = acos(-1.0);
void bullet::timerEvent(QTimerEvent *) {
    QList<QGraphicsItem *> list = collidingItems() ;
            foreach(QGraphicsItem * i , list){
            auto * item= dynamic_cast<EveryThing *>(i);
            if (item->wtype == TANK && item->getId() != this->id) {
                OVER = this->id;
                //qDebug()<<OVER;
                //scene()->removeItem(item);
                //scene()->removeItem(this);
                // delete this;
                return ;
            }else if (item->wtype == WALL){
                if (lifeValue == 0) {
//                    scene()->removeItem(this);
                    delete (this);
                    return ;
                }else {
                    if ( (fabs(this->pos().x() - item->getX2()))<3 && item->getY2() - this->pos().y() > 1 && this->pos().y() - item->getY1()  > 1  ){
                        //qDebug() << angle ;
                        if (lifeValue == 0) {
 //                           scene()->removeItem(this);
                            delete (this);
                            return ;
                        }else{
                            lifeValue--;
                            double angle2 = angle;
                            if (angle < 0){
                                angle2 = 360 - fabs(angle);
                            }
                            if (fabs(angle2) < 90) {
                                angle = 180-fabs(angle2);
                            }else{
                                angle = 540-fabs(angle2) ;

                            }
                        }
                    }
                    else if  ((fabs(this->pos().x() - item->getX1()))<3 && item->getY2() - this->pos().y() > 1 && this->pos().y() - item->getY1()  > 1 ){
                        if (lifeValue == 0) {
  //                          scene()->removeItem(this);
                            delete (this);
                            return ;
                        }else{
                            lifeValue--;
                            double angle2 = angle;
                            if (angle < 0){
                                angle2 = 360 - fabs(angle);
                            }
                            if (fabs(angle2) < 180) {
                                angle = 180-fabs(angle2);
                            }else{
                                angle = 540-fabs(angle2) ;

                            }
                        }
                    }
                    else if  (fabs(this->pos().y() - item->getY2()) < 3){
                        if (lifeValue == 0) {
     //                       scene()->removeItem(this);
                            delete (this);
                            return ;
                        }else{
                            lifeValue--;
                            double angle2 = angle;
                            if (angle < 0){
                                angle2 = 360 - fabs(angle);
                            }
                            if (fabs(angle2) > 90) {
                                angle = 360-fabs(angle2);
                            }else{
                                angle = 270+fabs(angle2) ;

                            }
                        }
                    }
                    else if(fabs(this->pos().y() - item->getY1()) < 3){
                        if (lifeValue == 0) {
   //                         scene()->removeItem(this);
                            delete (this);
                            return ;
                        }else{
                            lifeValue--;
                            double angle2 = angle;
                            if (angle < 0){
                                angle2 = 360 - fabs(angle);
                            }
                            if (fabs(angle2) > 270) {
                                angle = fabs(angle2)-270;
                            }else{
                                angle = 360-fabs(angle2) ;

                            }
                        }
                    }
//                    else{
//                        if (lifeValue == 0) {
//                            //                         scene()->removeItem(this);
//                            delete (this);
//                            return ;
//                        }else {
//                            lifeValue--;
//                            angle += 180;
//                        }
//                    }

//                    double angle2 = angle;
//                    if (angle < 0) {
//                        angle2 = 360 - fabs(angle);
//                    }
//                    qDebug()<<angle2;
//                    if (0<=angle2 && angle2 <=90)//ok
//                    {
//                        if (pos().y() - item->getY2() > 3){
//                            angle = 180-fabs(angle2);
//                        }else if (pos().y() - item->getY2() <=0){
//                            angle = 270+fabs(angle2) ;
//                        }else{
//                            angle = 180 + fabs(angle2);
//
//                        }
//
//                    }
//                        else if (90 < angle2 && angle2 <=180)//ok
//                    {
//                        if ( item->getX2() - pos().x() > 3){
//                            angle = 180-fabs(angle2);
//
//                        }else if (item->getX2() - pos().x()<=0) {
//                            angle = 360-fabs(angle2);
//                        }
//                        else{
//                            angle = 180 + fabs(angle2);
//
//
//                        }
//                    }
//                        else if (180 < angle2 && angle2 <=270)//ok
//                    {
//                        if (item->getY1()-pos().y()   > 3){
//                            angle = 540-fabs(angle2) ;
//                        }else if (pos().y() - item->getY1() <=0) {
//                            angle = 360-fabs(angle2) ;
//                        }
//                        else{
//                            angle = 180 + fabs(angle2);
//
//                        }
//                    }
//                        else{
//                        if ( item->getY1() - pos().y() > 3){
//                            angle = 540-fabs(angle2) ;
//                        }else if (pos().y() - item->getY1() <=0) {
//                            angle = fabs(angle2)-270;
//                        }
//                        else{
//                            angle = 180 + fabs(angle2);
//                        }
//                    }
                }
                move(speed);
                update();
                return ;
            }
        }
    qreal edgeX = scene()->sceneRect().right();
    qreal edgeTop = scene()->sceneRect().top();
    qreal edgeBottom = scene()->sceneRect().bottom();
    qreal edgeY = scene()->sceneRect().left();
    //qDebug() << scene()->itemsBoundingRect();
    //RLUD  a d  b c
    //qDebug() << angle ;
    if (pos().x() >= edgeX){
        //qDebug() << angle ;
        if (lifeValue == 0) {
            scene()->removeItem(this);
            delete (this);

        }else{
            lifeValue--;
            double angle2 = angle;
            if (angle < 0){
                angle2 = 360 - fabs(angle);
            }
            if (fabs(angle2) < 90) {
                angle = 180-fabs(angle2);
            }else{
                angle = 540-fabs(angle2) ;

            }
        }
    }
    if (pos().y() <= edgeTop ) {
        if (lifeValue == 0) {
            scene()->removeItem(this);
            delete (this);
        }else{
            lifeValue--;
            double angle2 = angle;
            if (angle < 0){
                angle2 = 360 - fabs(angle);
            }
            if (fabs(angle2) > 90) {
                angle = 360-fabs(angle2);
            }else{
                angle = 270+fabs(angle2) ;

            }
        }
    }
    if( pos().y() >= edgeBottom ){
        if (lifeValue == 0) {
            scene()->removeItem(this);
            delete (this);
        }else{
            lifeValue--;
            double angle2 = angle;
            if (angle < 0){
                angle2 = 360 - fabs(angle);
            }
            if (fabs(angle2) > 270) {
                angle = fabs(angle2)-270;
            }else{
                angle = 360-fabs(angle2) ;

            }
        }
    }
    if (pos().x() <= edgeY){
        if (lifeValue == 0) {
            scene()->removeItem(this);
            delete (this);
        }else{
            lifeValue--;
            double angle2 = angle;
            if (angle < 0){
                angle2 = 360 - fabs(angle);
            }
            if (fabs(angle2) < 180) {
                angle = 180-fabs(angle2);
            }else{
                angle = 540-fabs(angle2) ;

            }
        }
    }
    move(speed);
    update();

}

QRectF bullet::boundingRect() const {
    qreal adjust = 0;
    return {-bulletPix.width()/2 - adjust,-bulletPix.height()/2-adjust,bulletPix.width()+ adjust*2,bulletPix.height()+2*adjust};
}


void bullet::move(double t) {
    qreal dx = 2*(cos(-angle*PI/180.0));
    qreal dy = 2*(sin(-angle*PI/180.0));
    QPointF tmpp(this->pos().x()+dx,this->pos().y()+dy);
    this->setPos(tmpp);
}

bool bullet::isPositionValid() {
    return false;
}

void bullet::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) {
    painter->drawPixmap(boundingRect().topLeft(),bulletPix);

}

QPainterPath bullet::shape() const{
    QPainterPath bullets;
    bullets.addRect(this->boundingRect());
    return bullets;
}

