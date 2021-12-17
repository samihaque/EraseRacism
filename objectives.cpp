#include "objectives.h"
#include "ui_objectives.h"

objectives::objectives(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::objectives)
{
    ui->setupUi(this);
    QFile file(":/menutxtfiles/objectives.txt");
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
}


objectives::~objectives()
{
    delete ui;
    delete a;
}
