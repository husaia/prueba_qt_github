#include "mainwindow.h"
#include <QMessageBox>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    QMessageBox msg;
    msg.setText("hola mundo");
    msg.exec();
    return a.exec();

}
