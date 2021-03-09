#ifndef LABELS_DIALOG_H
#define LABELS_DIALOG_H

#include <QDialog>

namespace Ui {
class labels_dialog;
}

class labels_dialog : public QDialog
{
    Q_OBJECT

public:
    explicit labels_dialog(QWidget *parent = nullptr);
    ~labels_dialog();

private:
    Ui::labels_dialog *ui;
};

#endif // LABELS_DIALOG_H
