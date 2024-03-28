#include "dialog.h"
#include "./ui_dialog.h"



Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);


}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_clicked()
{
    ui->pushButton->setStyleSheet("background-image:url(:/Images/Desktop/zObjectsLogo-01.svg)");
    hide();
    secondDialog = new Dialog2(this);
    secondDialog -> show();

}

