#include "playgame.h"
#include "ui_playgame.h"

playgame::playgame(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::playgame)
{
    ui->setupUi(this);
}

playgame::~playgame()
{
    delete ui;
}
