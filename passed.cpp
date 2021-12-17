#include "passed.h"
#include "ui_passed.h"

Passed::Passed(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Passed)
{
    ui->setupUi(this);
}

Passed::~Passed()
{
    delete ui;
}

void Passed::on_pushButton_clicked()
{
    hide();
}

