//
// Created by 郝进 on 2018/1/6.
//
#include "Tank.h"
#include "Bullet.h"
#include <QPainter>
#include <QDebug>
#include <QtGui>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <cmath>
static const double PI = acos(-1.0);
void tank::move(double tt) {

    double x = UP - DOWN;   //上1  下 -1
    double y = LEFT - RIGHT;  //左-1 右 -1 angle 与x 轴角度
 //   qDebug() << cos(PI) << " " << cos(PI/3);
    qreal dx = x*1.5*(cos(-angle*PI/180.0));
    qreal dy = x*1.5*(sin(-angle*PI/180.0));
  //  if (dx!=0 ||dy !=0 )
  //  qDebug()<<angle<<" " << dx << " " << dy << " ";
    if (!isPositionValid(this->pos().x()+dx,this->pos().y()+dy)) return;
    if (fabs(angle) == 360) angle = 0;
    angle += y*2 ;
    double tmp = -angle;
    this->setRotation(tmp);
    if (!isPositionValid(this->pos().x(),this->pos().y())){
        angle -=y*2;
        this->setRotation(-angle);
    }
   // this->setPos(mapToParent(dx,dy));
    QPointF tmpp(this->pos().x()+dx,this->pos().y()+dy);
    this->setPos(tmpp);
    if (!isPositionValid(this->pos().x(),this->pos().y())){
        this->setPos(QPointF(this->pos().x()-dx,this->pos().y()-dy));
    }

//    double angle2 = fabs(angle);
//    if (angle2 > 180) angle2 -= 180;
//    double x = UP - DOWN;   //上1  下 -1
//    double y = LEFT - RIGHT;  //左-1 右 -1 angle 与x 轴角度
// //   qDebug() << cos(PI) << " " << cos(PI/3);
//    if (x > 0) {
//        qreal dx = x * (cos(angle2 * PI / 180.0));
//        qreal dy = x * (sin(angle2 * PI / 180.0));
//        qDebug() << angle << " " << dx << " " << dy << " ";
//        angle -= y;
//        this->setRotation(-angle);
//        this->setPos(mapToParent(dx, dy));
//    }else{
//        qreal dx = x * (cos(angle2 * PI / 180.0));
//        qreal dy = x * (sin(angle2 * PI / 180.0));
//        qDebug() << angle << " " << dx << " " << dy << " ";
//        angle -= y;
//        this->setRotation(-angle);
//        this->setPos(mapToParent(dx, dy));
//
//    }


  //  angle2 = -angle;
//    if (angle > 360) angle -= 360;
//    if (angle < -360) angle += 360;
//    auto tmp = this->boundingRect().center();
//    qDebug() << tmp;
   // this->setTransformOriginPoint(tmp.x()-this->tankPix.width()/2,tmp.y()+this->tankPix.height()/2);

//    QRectF rect;
//    rect |= this->mapToScene(this->boundingRect()).boundingRect();
//    QPointF center = rect.center();
//    QTransform t;
//    t.translate(center.x(), center.y());
//    t.rotate(y);
//    t.translate(-center.x(), -center.y());
//    this->setPos(t.map(this->pos()));
//    this->setRotation(angle);
}

void tank::fire() {
        bullet *x = new bullet(1, angle, "./../pic/bullet.png", id, pos());
        scene()->addItem(x);
}

void tank::hurtWithDemage(int demage) {

}

void tank::die() {
    scene()->removeItem(this);
    delete(this);
}

bool tank::isPositionValid(qreal x,qreal y) {
    QList<QGraphicsItem *> list = collidingItems() ;
            foreach(QGraphicsItem * i , list) {
            auto *item = dynamic_cast<EveryThing *>(i);
            if (item->wtype == WALL) {
                return false;
            }
        }
    qreal edgeX = scene()->sceneRect().right();
    qreal edgeTop = scene()->sceneRect().top();
    qreal edgeBottom = scene()->sceneRect().bottom();
    qreal edgeY = scene()->sceneRect().left();
    if (x >= edgeX){
        return false;
        //qDebug() << angle ;
//        if (lifeValue == 0) {
//            scene()->removeItem(this);
//            delete (this);
//
//        }else{
//            lifeValue--;
//            double angle2 = angle;
//            if (angle < 0){
//                angle2 = 360 - fabs(angle);
//            }
//            if (fabs(angle2) < 90) {
//                angle = 180-fabs(angle2);
//            }else{
//                angle = 540-fabs(angle2) ;
//
//            }
//        }
    }
    if (y <= edgeTop ) {
        return false;
//        if (lifeValue == 0) {
//            scene()->removeItem(this);
//            delete (this);
//        }else{
//            lifeValue--;
//            double angle2 = angle;
//            if (angle < 0){
//                angle2 = 360 - fabs(angle);
//            }
//            if (fabs(angle2) > 90) {
//                angle = 360-fabs(angle2);
//            }else{
//                angle = 270+fabs(angle2) ;
//
//            }
//        }
    }
    if( y>= edgeBottom ){
        return false;
//        if (lifeValue == 0) {
//            scene()->removeItem(this);
//            delete (this);
//        }else{
//            lifeValue--;
//            double angle2 = angle;
//            if (angle < 0){
//                angle2 = 360 - fabs(angle);
//            }
//            if (fabs(angle2) > 270) {
//                angle = fabs(angle2)-270;
//            }else{
//                angle = 360-fabs(angle2) ;
//
//            }
//        }
    }
    if (x <= edgeY){
        return false;
//        if (lifeValue == 0) {
//            scene()->removeItem(this);
//            delete (this);
//        }else{
//            lifeValue--;
//            double angle2 = angle;
//            if (angle < 0){
//                angle2 = 360 - fabs(angle);
//            }
//            if (fabs(angle2) < 180) {
//                angle = 180-fabs(angle2);
//            }else{
//                angle = 540-fabs(angle2) ;
//
//            }
//        }
    }

    return true;
}

void tank::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) {
//    Q_UNUSED(option);
//    Q_UNUSED(widget);
//    painter->setBrush(Qt::red);
//    painter->drawRect(0,0,20,20);
//    //painter->drawPixmap(0,0,tankPix);
    painter->drawPixmap(boundingRect().topLeft(),tankPix);

}

QRectF tank::boundingRect() const {
    qreal adjust = 0;
    return {-tankPix.width()/2 - adjust,-tankPix.height()/2-adjust,tankPix.width()+ adjust*2,tankPix.height()+2*adjust};
}
void tank::timerEvent(QTimerEvent *) {
//    qreal edgex = scene()->sceneRect().right() + boundingRect().width()/2;
//    qreal edgetop = scene()->sceneRect().top() + boundingRect().height()/2;
//    qreal edgebottom = scene()->sceneRect().bottom()+boundingRect().height()/2;
//    if (pos().x() >= edgex){
//        setPos(scene()->sceneRect().left(),pos().y());
//    }
//    if (pos().y() <= edgetop){
//        setPos(pos().x(),scene()->sceneRect().bottom());
//    }
//    if (pos().y() >= edgebottom) {
//        setPos(pos().x(), scene()->sceneRect().top());
//    }
//    angle += (qrand() % 10) / 20.0;
//    qreal dx = fabs(sin(angle*PI)*10.0);
//    qreal dy = (
// qrand()%20)-10.0;
//    setPos(mapToParent(dx,dy));
//    timee %= 200;
//    timee ++;
//    if (timee == 200){
//        setRotation(rotation()+acos(-1.0)/8);
//    }
    iss = iss % 50 + 1;
    if (iss %15 == 0 && FIRE){
        fire();
    }
    move(1);
    update();
}

QPainterPath tank::shape() const{
    QPainterPath bullets;
    bullets.addRect(this->boundingRect());
    return bullets;
}

