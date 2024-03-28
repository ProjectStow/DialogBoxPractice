#include "dialog2.h"
#include "ui_dialog2.h"


Dialog2::Dialog2(QWidget *children)
    : QDialog(children)
    , ui(new Ui::Dialog2)
{
    ui->setupUi(this);
    ui->label_2->setStyleSheet("");
}

Dialog2::~Dialog2()
{
    delete ui;
}

void Dialog2::on_pushButton_clicked()
{

    //accept();     (same as "close()")
    close();

}

