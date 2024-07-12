#include "default.h"
#include "ui_default.h"

default::default(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::default)
{
    ui->setupUi(this);
}

default::~default()
{
delete ui;
}
