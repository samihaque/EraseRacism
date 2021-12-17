#include "question7answer.h"
#include "ui_question7answer.h"

question7answer::question7answer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::question7answer)
{
    ui->setupUi(this);
}

question7answer::~question7answer()
{
    delete ui;
}

void question7answer::on_pushButton_clicked()
{
    hide();
    finalresult resultwindow;
    resultwindow.setModal(true);
    resultwindow.exec();
}

