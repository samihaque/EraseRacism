#include "question2correctans.h"
#include "ui_question2correctans.h"

question2correctans::question2correctans(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::question2correctans)
{
    ui->setupUi(this);
}

question2correctans::~question2correctans()
{
    delete ui;
}

void question2correctans::on_pushButton_clicked()
{
    hide();
    question3 ques3window;
    ques3window.setModal(true);
    ques3window.exec();
}

