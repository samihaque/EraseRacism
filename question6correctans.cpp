#include "question6correctans.h"
#include "ui_question6correctans.h"

question6correctans::question6correctans(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::question6correctans)
{
    ui->setupUi(this);
}

question6correctans::~question6correctans()
{
    delete ui;
}

void question6correctans::on_pushButton_clicked()
{
    hide();
    question7 ques7window;
    ques7window.setModal(true);
    ques7window.exec();
}

