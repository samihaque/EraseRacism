#include "question4.h"
#include "ui_question4.h"

question4::question4(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::question4)
{
    ui->setupUi(this);
}

question4::~question4()
{
    delete ui;
}

void question4::on_pushButton_clicked()
{
    if (ui->o4->isChecked()){
        score +=10;
        hide();
        question4answer nxtwindow;
        nxtwindow.setModal(true);
        nxtwindow.exec();

    }
    else if (ui->o1->isChecked() || ui->o2->isChecked() || ui->o3->isChecked() || ui->o5->isChecked() ){
        hide();
        question4correctans nxtwindow2;
        nxtwindow2.setModal(true);
        nxtwindow2.exec();

    }
    else {
        QMessageBox::information(this,"title","Please select an answer");
    }
}

