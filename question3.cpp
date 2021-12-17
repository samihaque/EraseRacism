#include "question3.h"
#include "ui_question3.h"

question3::question3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::question3)
{
    ui->setupUi(this);
}

question3::~question3()
{
    delete ui;
}

void question3::on_pushButton_clicked()
{
    if (ui->o3->isChecked()){
        score +=10;
        hide();
        question3answer nxtwindow;
        nxtwindow.setModal(true);
        nxtwindow.exec();

    }
    else if (ui->o1->isChecked() || ui->o2->isChecked() || ui->o4->isChecked() || ui->o5->isChecked() ){
        hide();
        question3correctans nxtwindow2;
        nxtwindow2.setModal(true);
        nxtwindow2.exec();

    }
    else {
        QMessageBox::information(this,"title","Please select an answer");
    }
}

