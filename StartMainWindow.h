//
// Created by 郝进 on 2018/1/7.
//

#ifndef TANK_STARTMAINWINDOW_H
#define TANK_STARTMAINWINDOW_H


#include <QMainWindow>
#include <QPainter>
class startMainWindow : public QMainWindow{
Q_OBJECT
public:
    explicit startMainWindow(QWidget *parent = nullptr);
    ~startMainWindow() override = default;

private slots:
    void keyPressEvent(QKeyEvent *event) override;
    void paintEvent(QPaintEvent *event) override;
  //  void moveSelect(int d);
private:
    QImage *backGround;
    QPixmap *startImg;
    int status = 0;
    QPainter paint;
};


#endif //TANK_STARTMAINWINDOW_H
