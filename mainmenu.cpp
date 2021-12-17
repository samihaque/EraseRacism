#include "mainmenu.h"
#include "ui_mainmenu.h"


mainmenu::mainmenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mainmenu)
{
    ui->setupUi(this);
}

mainmenu::~mainmenu()
{
    delete ui;
}


void mainmenu::on_help_clicked()
{
    //opening help window
    help helpWindow;
    helpWindow.setModal(true);
    helpWindow.exec();
}


void mainmenu::on_objectives_clicked()
{
    objectives objectivesWindow;
    objectivesWindow.setModal(true);
    objectivesWindow.exec();
}


void mainmenu::on_about_clicked()
{
    about aboutWindow;
    aboutWindow.setModal(true);
    aboutWindow.exec();
}


void mainmenu::on_quitGame_clicked()
{
    quit quitWindow;
    quitWindow.setModal(true);
    quitWindow.exec();
//    hide();
//    window2 = new quit(this);
//    window2->show();
}


void mainmenu::on_playGame_clicked()
{
    score = 0;
    question1 ques1window;
    ques1window.setModal(true);
    ques1window.exec();
}

