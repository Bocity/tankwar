//
// Created by 郝进 on 2018/1/7.
//

#ifndef TANK_EVERYTHING_H
#define TANK_EVERYTHING_H

#include <QObject>
#include <QGraphicsItem>

enum TYPES{TANK,BULLET,WALL};
class EveryThing :public QObject,public QGraphicsItem{
public:
    EveryThing()= default;
TYPES wtype;
    int lifeValue{};
    virtual int getId()= 0;
    virtual double getX1() = 0;
    virtual  double getX2() = 0;
    virtual  double getY2() = 0;
    virtual  double getY1() = 0;
};


#endif //TANK_EVERYTHING_H
