#include "failed.h"
#include "ui_failed.h"

failed::failed(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::failed)
{
    ui->setupUi(this);
}

failed::~failed()
{
    delete ui;
}

void failed::on_pushButton_clicked()
{
    hide();
}

