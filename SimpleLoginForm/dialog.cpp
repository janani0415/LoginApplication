#include "dialog.h"
#include "ui_dialog.h"
#include<QString>
#include<QLineEdit>
#include<QDebug>
#include<QApplication>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_Confirm_Button_clicked()
{
    QString email=ui->lineEdit->text();
        QString password=ui->lineEdit_2->text();
        QString confirmpassword=ui->lineEdit_3->text();
        qDebug()<<"Email:"<<email;
        qDebug()<<"Password:"<<password;
        qDebug()<<"Confirm Password:"<<confirmpassword;
        if(!email.isEmpty() && !password.isEmpty() && !confirmpassword.isEmpty())
        {

        }
        else
        {
            qDebug()<<"One field is empty!!";
        }
}

void Dialog::on_Exit_Button_clicked()
{
    QApplication::quit();
}
