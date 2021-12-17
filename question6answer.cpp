#include "question6answer.h"
#include "ui_question6answer.h"

question6answer::question6answer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::question6answer)
{
    ui->setupUi(this);
}

question6answer::~question6answer()
{
    delete ui;
}

void question6answer::on_pushButton_clicked()
{
    hide();
    question7 ques7window;
    ques7window.setModal(true);
    ques7window.exec();
}

