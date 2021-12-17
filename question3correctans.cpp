#include "question3correctans.h"
#include "ui_question3correctans.h"

question3correctans::question3correctans(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::question3correctans)
{
    ui->setupUi(this);
}

question3correctans::~question3correctans()
{
    delete ui;
}

void question3correctans::on_pushButton_clicked()
{
    hide();
    question4 ques4window;
    ques4window.setModal(true);
    ques4window.exec();
}

