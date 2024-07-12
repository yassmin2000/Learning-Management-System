#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include"Admin.h"
#include<QMessageBox>
#include<QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/lama zakaria/Desktop/flc_design2022122595064_auto_x2.jpg");
    int h=ui->label_pic->height();
    int w=ui->label_pic->width();
    ui->label_pic->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_submit_clicked()
{
    QString p=ui->line_email->text();
    std::string email=p.toStdString();
    QString u=ui->lineEdit_password->text();
    std::string password=u.toStdString();




    Admin d(email,password);
    bool k=d.read_name();


    if(k)
    {
        QMessageBox::information(this,"login","sucess");
        hide();
        dialog =new Dialog(this);
        dialog->show();
      }

    else
        QMessageBox::critical(this,"login","not found");





}






