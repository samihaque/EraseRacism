#include "question2.h"
#include "ui_question2.h"

question2::question2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::question2)
{
    ui->setupUi(this);
}

question2::~question2()
{
    delete ui;
}

void question2::on_pushButton_clicked()
{
    if (ui->o2->isChecked()){
        score +=10;
        hide();
        question2answer nxtwindow;
        nxtwindow.setModal(true);
        nxtwindow.exec();
       // hide();
//        nxtwindow = new question1answer(this);
//        nxtwindow->show();
    }
    else if (ui->o1->isChecked() || ui->o3->isChecked() || ui->o4->isChecked() || ui->o5->isChecked() ){
        hide();
        question2correctans nxtwindow2;
        nxtwindow2.setModal(true);
        nxtwindow2.exec();
        // hide();
//        nxtwindow2 = new question1correctans(this);
//        nxtwindow2->show();
    }
    else {
        QMessageBox::information(this,"title","Please select an answer");
    }
}

