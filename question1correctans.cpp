#include "question1correctans.h"
#include "ui_question1correctans.h"

question1correctans::question1correctans(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::question1correctans)
{
    ui->setupUi(this);
}

question1correctans::~question1correctans()
{
    delete ui;
}

void question1correctans::on_pushButton_clicked()
{
    hide();
    question2 ques2window;
    ques2window.setModal(true);
    ques2window.exec();
}

