#include "question5.h"
#include "ui_question5.h"

question5::question5(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::question5)
{
    ui->setupUi(this);
}

question5::~question5()
{
    delete ui;
}

void question5::on_pushButton_clicked()
{
    if (ui->o5->isChecked()){
        score +=10;
        hide();
        question5answer nxtwindow;
        nxtwindow.setModal(true);
        nxtwindow.exec();

    }
    else if (ui->o1->isChecked() || ui->o2->isChecked() || ui->o3->isChecked() || ui->o4->isChecked() ){
        hide();
        question5correctans nxtwindow2;
        nxtwindow2.setModal(true);
        nxtwindow2.exec();

    }
    else {
        QMessageBox::information(this,"title","Please select an answer");
    }
}

