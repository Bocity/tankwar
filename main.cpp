#include <QApplication>
#include <QDebug>
#include "MainWindow.h"
#include "StartMainWindow.h"
int main(int argc, char *argv[]){
    QApplication a(argc, argv);
    auto *w = new startMainWindow;
    w->show();
//    mainWindow *w = new mainWindow;
//    w->display();
    return a.exec();
}
