#include "botones_dialog.h"
#include "ui_botones_dialog.h"

botones_dialog::botones_dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::botones_dialog)
{
    ui->setupUi(this);
}

botones_dialog::~botones_dialog()
{
    delete ui;
}
