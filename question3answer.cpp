#include "question3answer.h"
#include "ui_question3answer.h"

question3answer::question3answer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::question3answer)
{
    ui->setupUi(this);
}

question3answer::~question3answer()
{
    delete ui;
}

void question3answer::on_pushButton_clicked()
{
    hide();
    question4 ques4window;
    ques4window.setModal(true);
    ques4window.exec();
}

