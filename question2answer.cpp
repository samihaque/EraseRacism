#include "question2answer.h"
#include "ui_question2answer.h"

question2answer::question2answer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::question2answer)
{
    ui->setupUi(this);
}

question2answer::~question2answer()
{
    delete ui;
}

void question2answer::on_pushButton_clicked()
{
    hide();
    question3 ques3window;
    ques3window.setModal(true);
    ques3window.exec();
}

