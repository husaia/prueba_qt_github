#include "labels_dialog.h"
#include "ui_labels_dialog.h"

labels_dialog::labels_dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::labels_dialog)
{
    ui->setupUi(this);
}

labels_dialog::~labels_dialog()
{
    delete ui;
}
