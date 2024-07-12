#ifndef STUDENT_H
#define STUDENT_H

#include <QDialog>
#include "student_profile.h"
#include "add_student.h"
#include <QStandardItemModel>

namespace Ui {
class student;
}

class student : public QDialog
{
    Q_OBJECT

public:
    explicit student(QWidget *parent = nullptr);
    ~student();

private slots:
    void on_pushButton_di_clicked();

    void on_pushButton_clicked();

    void on_table_stu_activated(const QModelIndex &index);

private:
    Ui::student *ui;
    student_profile *s_p;
    add_student *ad;
    QStandardItemModel *csv_model;
};

#endif // STUDENT_H
