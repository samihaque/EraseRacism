#include "question7correctans.h"
#include "ui_question7correctans.h"

question7correctans::question7correctans(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::question7correctans)
{
    ui->setupUi(this);
}

question7correctans::~question7correctans()
{
    delete ui;
}

void question7correctans::on_pushButton_clicked()
{
    hide();
    finalresult resultwindow;
    resultwindow.setModal(true);
    resultwindow.exec();
}

