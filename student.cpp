#include "student.h"
#include "ui_student.h"

#include <QHeaderView>
#include"student_class.h"


student::student(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::student)
{
     ui->setupUi(this);
    st t;
    student_class sc;
    csv_model =new QStandardItemModel(this);
    csv_model->setColumnCount(5);
        csv_model->setHorizontalHeaderLabels(QStringList() << "Name" << "ID" << "Email"<<"Mobil"<<"Age");


    std::map<std::string,st>ms;
    ms=sc.read_data_st();

 // QStringList list;
 //   for(int i=1;i<=ms.size();i++)
   // {
     //   QString w=QString::number(i);
    //    list.append(w);

   // }
    //  csv_model->setVerticalHeaderLabels(list);
      ui->table_stu->setModel(csv_model);




    for (auto it = ms.begin(); it != ms.end(); ++it)
    {
            QList<QStandardItem *> standardItemsList;


          QString d=QString::fromStdString(it->first);
          standardItemsList.append(new QStandardItem(d));
          QString h=QString::fromStdString(it->second.id);
          standardItemsList.append(new QStandardItem(h));
          QString l=QString::fromStdString(it->second.email);
          standardItemsList.append(new QStandardItem(l));
      QString k=QString::fromStdString(it->second.mobil);
         standardItemsList.append(new QStandardItem(k));
         QString y=QString::fromStdString(it->second.age);
         standardItemsList.append(new QStandardItem(y));
          csv_model->insertRow(csv_model->rowCount(), standardItemsList);


    }




}

student::~student()
{
    delete ui;
}

void student::on_pushButton_di_clicked()
{

    hide();
    s_p=new student_profile(this);
    s_p->show();

}


void student::on_pushButton_clicked()
{
    hide();
    ad=new add_student(this);
    ad->show();
}



