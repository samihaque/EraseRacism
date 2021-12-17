#include "question4answer.h"
#include "ui_question4answer.h"

question4answer::question4answer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::question4answer)
{
    ui->setupUi(this);
}

question4answer::~question4answer()
{
    delete ui;
}

void question4answer::on_pushButton_clicked()
{
    hide();
    question5 ques5window;
    ques5window.setModal(true);
    ques5window.exec();
}

