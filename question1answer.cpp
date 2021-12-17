#include "question1answer.h"
#include "ui_question1answer.h"

question1answer::question1answer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::question1answer)
{
    ui->setupUi(this);

}

question1answer::~question1answer()
{
    delete ui;
}

void question1answer::on_pushButton_clicked()
{
    hide();
    question2 ques2window;
    ques2window.setModal(true);
    ques2window.exec();
}

