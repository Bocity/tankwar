//
// Created by 郝进 on 2018/1/7.
//

#ifndef TANK_MAINWINDOW_H
#define TANK_MAINWINDOW_H


#include <QMainWindow>
#include <QGraphicsView>
class mainWindow :public QGraphicsView{
public:
    mainWindow();
    void display(QWidget *p);
    void timerEvent(QTimerEvent *) override;
protected:
    void keyPressEvent(QKeyEvent *event) override;
    void keyReleaseEvent(QKeyEvent *event) override ;
    void mousePressEvent(QMouseEvent *event) override {};
    void mouseMoveEvent(QMouseEvent *event) override {};
signals:
private:
    int timeId;

};


#endif //TANK_MAINWINDOW_H
