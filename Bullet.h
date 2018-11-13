//
// Created by 郝进 on 2018/1/6.
//

#ifndef TANK_BULLET_H
#define TANK_BULLET_H

#include <QObject>
#include <QGraphicsItem>
#include "Tank.h"
#include "EveryThing.h"

typedef enum{

} BulletType;
class bullet: public EveryThing{
    Q_OBJECT
Q_INTERFACES(QGraphicsItem)
public:
    bullet(double speed, double angle, std::string img ,int id,QPointF tmp):speed(speed),angle(angle),img(
            std::move(img)),id(id) {
        bulletPix.load(tr(this->img.c_str()));
        this->setPos(tmp);
        startTimer(10);
        lifeValue = 5;
        wtype = BULLET;
        //  update();
        // qDebug() << QT_VERSION_STR;
    }
     int getId() override {
        return id;
    }
    const double getSpeed()const{
        return speed;
    }
    const double getLifeValue()const{
        return lifeValue;
    }
    const double getAngle()const{
        return angle;
    }
    const std::string getImg()const {
        return img;
    }
    double getX1() override {return 0;}
     double getX2() override {return 0;}
    double getY2() override {return 0;}
      double getY1() override {return 0;}
    void timerEvent(QTimerEvent *) override;
    QRectF boundingRect()const override;
    void move(double t);
    bool isPositionValid();
    int UP{},DOWN{},RIGHT{},LEFT{},FIRE{};
    QPainterPath shape() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;
private:
    double speed;

    QPixmap bulletPix;
    double angle;
  //  tank *p = nullptr;
    // double angle2;
    std::string img;
    int id;
};


#endif //TANK_BULLET_H
