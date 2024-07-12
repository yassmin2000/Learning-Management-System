#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include"student.h"

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Dialog *ui;
    student * s;
};

#endif // DIALOG_H
