#include "about.h"
#include "ui_about.h"

about::about(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::about)
{
    ui->setupUi(this);
    QFile file(":/menutxtfiles/about.txt");
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

about::~about()
{
    delete ui;
    delete a;
}
