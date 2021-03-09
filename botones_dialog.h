#ifndef BOTONES_DIALOG_H
#define BOTONES_DIALOG_H

#include <QDialog>

namespace Ui {
class botones_dialog;
}

class botones_dialog : public QDialog
{
    Q_OBJECT

public:
    explicit botones_dialog(QWidget *parent = nullptr);
    ~botones_dialog();

private:
    Ui::botones_dialog *ui;
};

#endif // BOTONES_DIALOG_H
