#include "question5answer.h"
#include "ui_question5answer.h"

question5answer::question5answer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::question5answer)
{
    ui->setupUi(this);
}

question5answer::~question5answer()
{
    delete ui;
}

void question5answer::on_pushButton_clicked()
{
    hide();
    question6 ques6window;
    ques6window.setModal(true);
    ques6window.exec();
}

