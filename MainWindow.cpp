//
// Created by 郝进 on 2018/1/7.
//

#include "MainWindow.h"
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QTime>
#include <QDebug>
#include <QKeyEvent>
#include <QMessageBox>
#include "Tank.h"
#include "Common.h"
#include "StartMainWindow.h"
#include "gameMap.h"
#include "Wall.h"
mainWindow::mainWindow() = default;
tank *play1,*play2;
int OVER  = 0;
void mainWindow::display(QWidget *p) {
    timeId = startTimer(100);
    QTime time = QTime::currentTime();
    srand( time.msec());
    qsrand(static_cast<uint>(time.msec() + time.second() * 1000));
    auto *scene = new QGraphicsScene;
    scene->setSceneRect(QRectF(20,20,440,440));
    //scene->setBackgroundBrush(Qt::darkBlue);
    play1 = new tank(1, 1, 0, "./../pic/tank1.png", 1);
    play1->setPos(50 + (rand() % 8+1) * 50,50  +  (rand() % 8+1) * 50);
    scene->addItem(play1);
    play2 = new tank(1, 1, 0, "./../pic/tank2.png", 2);
    play2->setPos(50 + (rand() % 8+1) * 50,50  +  (rand() % 8+1) * 50);
    scene->addItem(play2);
    gameMap x;
    x.x1 = int (play1->pos().x()-50)/50;
    x.y1 = int (play1->pos().y()-50)/50;
    x.x2 = int (play2->pos().x()-50)/50;
    x.y2 = int (play2->pos().y()-50)/50;
    do {
        x.goMap();
    }while(!x.check());
    qDebug() << x.x1 << " " << x.y1 << " " << x.x2 << " " << x.y2;
    for(int i = 1;i < 8; ++i){
        for (int j = 1; j <8 ;++j){
            qDebug() << x.a[i][j] << " ";
        }
        qDebug()<<"\n";
    }
    for(int i = 1;i < 8;++i){
        for(int j = 1;j < 8;++j){
            if (x.a[i][j] == -1){
                wall *p3 = new wall("./../pic/wall.png");
                p3->setPos(50 + i*50,50 + j * 50);
                scene->addItem(p3);
            }
        }
    }
    this->setViewport(p);
    this->setFocus();
   // this->setAutoFillBackground(false);
    this->setWindowTitle("坦克大战1.0");
    this->setScene(scene);
    this->setRenderHints(QPainter::Antialiasing | QPainter::SmoothPixmapTransform);
    this->setDragMode(QGraphicsView::ScrollHandDrag);
    this->resize(450,450);
    this->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    this->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    this->show();
    qDebug() << QT_VERSION_STR;


}

void mainWindow::keyPressEvent(QKeyEvent *event) {
    if (OVER) return ;
  //  QGraphicsView::keyPressEvent(event);
   // qDebug() << QT_VERSION_STR;
    switch(event->key()){
        case (Qt::Key_Up):
            play1->UP = true;
            break;
        case (Qt::Key_Down):
            play1->DOWN = true;
            break;
        case (Qt::Key_Left):
            play1->LEFT = true;
            break;
        case (Qt::Key_Right):
            play1->RIGHT = true;
            break;
        case (Qt::Key_M):
            play1->FIRE = true;
            break;
        case (Qt::Key_W):
            play2->UP = true;
            break;
        case (Qt::Key_S):
            play2->DOWN = true;
            break;
        case (Qt::Key_A):
            play2->LEFT = true;
            break;
        case (Qt::Key_D):
            play2->RIGHT = true;
            break;
        case (Qt::Key_G):
            play2->FIRE = true;
            break;
        default:
            break;
    }
}

void mainWindow::keyReleaseEvent(QKeyEvent *event) {
    if (OVER) return;
  //  qDebug() << QT_VERSION_STR;
    switch(event->key()){
        case (Qt::Key_Up):
            play1->UP = false;
            break;
        case (Qt::Key_Down):
            play1->DOWN = false;
            break;
        case (Qt::Key_Left):
            play1->LEFT = false;
            break;
        case (Qt::Key_Right):
            play1->RIGHT = false;
            break;
        case (Qt::Key_M):
            play1->FIRE = false;
            break;
        case (Qt::Key_W):
            play2->UP = false;
            break;
        case (Qt::Key_S):
            play2->DOWN = false;
            break;
        case (Qt::Key_A):
            play2->LEFT = false;
            break;
        case (Qt::Key_D):
            play2->RIGHT = false;
            break;
        case (Qt::Key_G):
            play2->FIRE = false;
            break;
        default:
            break;
    }
}

void mainWindow::timerEvent(QTimerEvent *) {

    if (OVER){
        qDebug() << OVER;
        if (OVER == 1){
            qDebug() << OVER;
            QMessageBox::about(nullptr, "Result", "玩家一胜利");
        }else{
            QMessageBox::about(nullptr, "Result", "玩家二胜利");
        }
        //timer->stop();
        killTimer(timeId);
//        QList<QGraphicsItem *> list = QGraphicsItem::;
//                foreach(QGraphicsItem * i , list){
//                auto * item= dynamic_cast<EveryThing *>(i);
        scene()->clear();
        OVER = 0;
        auto *w = new startMainWindow;
        w->show();
        delete(this);

    }

}

