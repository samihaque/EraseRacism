#include "question6.h"
#include "ui_question6.h"

question6::question6(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::question6)
{
    ui->setupUi(this);
}

question6::~question6()
{
    delete ui;
}

void question6::on_pushButton_clicked()
{
    if (ui->o4->isChecked()){
        score +=10;
        hide();
        question6answer nxtwindow;
        nxtwindow.setModal(true);
        nxtwindow.exec();

    }
    else if (ui->o1->isChecked() || ui->o2->isChecked() || ui->o3->isChecked() || ui->o5->isChecked() ){
        hide();
        question6correctans nxtwindow2;
        nxtwindow2.setModal(true);
        nxtwindow2.exec();

    }
    else {
        QMessageBox::information(this,"title","Please select an answer");
    }
}

