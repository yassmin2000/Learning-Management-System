#ifndef STUDENT_PROFILE_H
#define STUDENT_PROFILE_H

#include <QDialog>
#include "modify_student.h"

namespace Ui {
class student_profile;
}

class student_profile : public QDialog
{
    Q_OBJECT

public:
    explicit student_profile(QWidget *parent = nullptr);
    ~student_profile();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::student_profile *ui;
    modify_student *ms;
};

#endif // STUDENT_PROFILE_H
