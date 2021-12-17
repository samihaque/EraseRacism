#include "question7.h"
#include "ui_question7.h"

question7::question7(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::question7)
{
    ui->setupUi(this);
}

question7::~question7()
{
    delete ui;
}

void question7::on_pushButton_clicked()
{
    if (ui->o1->isChecked()){
        score +=10;
        hide();
        question7answer nxtwindow;
        nxtwindow.setModal(true);
        nxtwindow.exec();

    }
    else if (ui->o2->isChecked() || ui->o3->isChecked() || ui->o4->isChecked() || ui->o5->isChecked() ){
        hide();
        question7correctans nxtwindow2;
        nxtwindow2.setModal(true);
        nxtwindow2.exec();

    }
    else {
        QMessageBox::information(this,"title","Please select an answer");
    }
}

