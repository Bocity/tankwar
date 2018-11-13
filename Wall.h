//
// Created by 郝进 on 2018/1/7.
//

#ifndef TANK_WALL_H
#define TANK_WALL_H


#include "EveryThing.h"

class wall: public EveryThing{
Q_OBJECT
    Q_INTERFACES(QGraphicsItem)
public:
    explicit wall(std::string img ):img(
            std::move(img)){
        wtype = WALL;
        wallPix.load(tr(this->img.c_str()));
    }
    const double getLifeValue()const{
        return lifeValue;
    }

    const std::string getImg()const {
        return img;
    }
    int getId() override {
        return 0;
    }
    double getX1() override {
        return this->pos().x()-wallPix.width()/2;
    }
    double getX2() override {
        return this->pos().x()+wallPix.width()/2;
    }
    double getY1() override {
        return this->pos().y()-wallPix.height()/2;
    }
    double getY2() override {
        return this->pos().y()+wallPix.height()/2;
    }
    QRectF boundingRect()const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;
private:

    QPixmap wallPix;
    std::string img;

    QPainterPath shape() const override;
};



#endif //TANK_WALL_H
