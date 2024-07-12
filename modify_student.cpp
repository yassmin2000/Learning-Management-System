#include "modify_student.h"
#include "ui_modify_student.h"

modify_student::modify_student(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::modify_student)
{
    ui->setupUi(this);
}

modify_student::~modify_student()
{
    delete ui;
}
