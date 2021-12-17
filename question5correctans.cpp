#include "question5correctans.h"
#include "ui_question5correctans.h"

question5correctans::question5correctans(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::question5correctans)
{
    ui->setupUi(this);
}

question5correctans::~question5correctans()
{
    delete ui;
}

void question5correctans::on_pushButton_clicked()
{
    hide();
    question6 ques6window;
    ques6window.setModal(true);
    ques6window.exec();
}

