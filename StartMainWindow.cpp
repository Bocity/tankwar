//
// Created by 郝进 on 2018/1/7.
//

#include "StartMainWindow.h"
#include <QKeyEvent>
#include <QDebug>
#include "MainWindow.h"
startMainWindow::startMainWindow(QWidget *parent) {
    backGround = new QImage("./../pic/background.png");
    startImg = new QPixmap;
    startImg->load("./../pic/tank1.png");
    status = 1;

}

void startMainWindow::keyPressEvent(QKeyEvent *event) {
    mainWindow *tmp;
    qDebug() << 0;
    switch(event->key()){
        case(Qt::Key_Return):
            qDebug() << 1 ;
            if (status) {
                tmp = new mainWindow;
                tmp->display(this);

            }else{
                exit(0);
            }
            break;
        case(Qt::Key_Up):
            status = 1;
            update();
            qDebug() << 2 ;
            break;
        case(Qt::Key_Down):
            status = 0;
            update();
            qDebug() << 3 ;
            break;
        default:
            qDebug() << 4 ;
            break;
    }
}

void startMainWindow::paintEvent(QPaintEvent *event) {
    QWidget::paintEvent(event);
    Q_UNUSED(event);
    setFixedSize(600,600);
    paint.begin(this);
    paint.drawImage(QRect(0,0,600,600),*backGround);
    if (status == 1) {
        paint.drawPixmap(230,325,*startImg);
    }else{
        paint.drawPixmap(230,435,*startImg);
    }
    paint.end();
}

