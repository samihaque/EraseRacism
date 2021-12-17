#include "question1.h"
#include "ui_question1.h"

question1::question1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::question1)
{
    ui->setupUi(this);
}

question1::~question1()
{
    delete ui;
//    delete nxtwindow;
//    delete nxtwindow2;
}

void question1::on_pushButton_clicked()
{
    if (ui->o1->isChecked()){
       score +=10;
        hide();
        question1answer nxtwindow;
        nxtwindow.setModal(true);
        nxtwindow.exec();

    }
    else if (ui->o2->isChecked() || ui->o3->isChecked() || ui->o4->isChecked() || ui->o5->isChecked() ){
        hide();
        question1correctans nxtwindow2;
        nxtwindow2.setModal(true);
        nxtwindow2.exec();

    }
    else {
        QMessageBox::information(this,"title","Please select an answer");
    }
}

