#include "question4correctans.h"
#include "ui_question4correctans.h"

question4correctans::question4correctans(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::question4correctans)
{
    ui->setupUi(this);
}

question4correctans::~question4correctans()
{
    delete ui;
}

void question4correctans::on_pushButton_clicked()
{
    hide();
    question5 ques5window;
    ques5window.setModal(true);
    ques5window.exec();
}

