#include "student_profile.h"
#include "ui_student_profile.h"

student_profile::student_profile(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::student_profile)
{
    ui->setupUi(this);
}

student_profile::~student_profile()
{
    delete ui;
}

void student_profile::on_pushButton_2_clicked()
{
    hide();
    ms= new modify_student(this);
    ms->show();

}

