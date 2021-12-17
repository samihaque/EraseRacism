#include "help.h"
#include "ui_help.h"

help::help(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::help)
{
    ui->setupUi(this);
    QFile file(":/menutxtfiles/helpMenu.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;

    QTextStream in(&file);
    QString text;
    while (!in.atEnd()) {
        QString line = in.readLine();
        //qInfo() << line;
        text += line + '\r';

      // a.setPlainText(line);
    }
    a = new QPlainTextEdit (text, this);
//    QFile file(":/menutxtfiles/helpMenu.txt");
//    if(!file.open(QFile::ReadOnly | QFile::Text)){
//        QMessageBox::warning(this, "title", "Error opening file");
//    }
//    QTextStream in(&file);
//    QString text = in.readAll();
//    ui->plainTextEdit.setPlainText(text);
}

help::~help()
{
    delete ui;
    delete a;
}
