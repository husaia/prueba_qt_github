#include "mainwindow.h"
#include <QMessageBox>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    QMessageBox msg;
    msg.setText("Este es la segunda version xD");
    msg.exec();
    return a.exec();

}
