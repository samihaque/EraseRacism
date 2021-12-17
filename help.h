#ifndef HELP_H
#define HELP_H

#include "qplaintextedit.h"
#include <QFile>
#include <QDir>
#include <QPlainTextEdit>
#include <QTextStream>
#include <QMessageBox>
#include <QDialog>

namespace Ui {
class help;
}

class help : public QDialog
{
    Q_OBJECT

public:
    explicit help(QWidget *parent = nullptr);
    ~help();

private:
    Ui::help *ui;
    QPlainTextEdit *a;

};

#endif // HELP_H
