#include "mainwindow.h"
#include <QMessageBox>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    QMessageBox msg;
    msg.setText("este es el tercer intento");
    msg.exec();
    return a.exec();

}
