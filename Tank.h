//
// Created by 郝进 on 2018/1/6.
//

#ifndef TANK_TANK_H
#define TANK_TANK_H
#include <QGraphicsItem>
#include <QDebug>
#include "EveryThing.h"

class tank: public EveryThing{
    Q_OBJECT
    Q_INTERFACES(QGraphicsItem)
public:
    tank(double speed, double lifeValue, double angle, std::string img,int id):speed(speed),angle(angle),img(
            std::move(img)),id(id) {
         tankPix.load(tr(this->img.c_str()));
        startTimer(10);
        wtype = TANK;
        UP = DOWN = LEFT = RIGHT  = FIRE =  false;
      //  update();
       // qDebug() << QT_VERSION_STR;
    }
    int getId() override {
        return id;
    }
    const double getSpeed()const{
        return speed;
    }
    const double getAngle()const{
        return angle;
    }
    const std::string getImg()const {
        return img;
    }
    void timerEvent(QTimerEvent *) override;
    QRectF boundingRect()const override;
    void move(double t);
    double getX1() override {return 0;}
    double getX2() override {return 0;}
    double getY2() override {return 0;}
    double getY1() override {return 0;}
    void fire();
    void hurtWithDemage(int demage);
    void die();
    bool isPositionValid(qreal x, qreal y);
    int UP,DOWN,RIGHT,LEFT,FIRE;
    QPainterPath shape() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;
private:

    double speed;
    QPixmap tankPix;
    double angle;
    double angle2;
   // double angle2;
    std::string img;
    int id;
    int iss = 0;
};
#endif //TANK_TANK_H
