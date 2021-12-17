#include "finalresult.h"
#include "ui_finalresult.h"

finalresult::finalresult(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::finalresult)
{
    ui->setupUi(this);
}

finalresult::~finalresult()
{
    delete ui;
}
bool finalresult::checkpass(){
    if (score < passScore){
        return false;
    }
    else {
        return true;
    }
}
void finalresult::on_pushButton_clicked()
{
    if (checkpass()){
        score = 0;
        hide();
        Passed nxtwindow;
        nxtwindow.setModal(true);
        nxtwindow.exec();

    }
    else {
        score = 0;
        hide();
        failed nxtwindow2;
        nxtwindow2.setModal(true);
        nxtwindow2.exec();
    }
}

