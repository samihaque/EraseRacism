#include "quit.h"
#include "ui_quit.h"

quit::quit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::quit)
{
    ui->setupUi(this);
//    QFile file(":/menutxtfiles/quitGame.txt");
//    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
//        return;

//    QTextStream in(&file);
//    QString text;
//    while (!in.atEnd()) {
//        QString line = in.readLine();
//        //qInfo() << line;
//        text += line + '\r';

//      // a.setPlainText(line);
//    }
//    a = new QPlainTextEdit (text, this);
}

quit::~quit()
{
    delete ui;
   // delete a;
}

void quit::on_noquit_clicked()
{
     hide();
}


void quit::on_yesquit_clicked()
{
    exit(0);
}

