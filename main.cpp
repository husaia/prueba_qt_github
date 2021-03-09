#include "mainwindow.h"
#include <QMessageBox>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    // vamos a calar el pull a ver si jala
    QMessageBox msg;
    msg.setText("alv no me sale lo que quiero hacer");
    msg.exec();
    return a.exec();

}
