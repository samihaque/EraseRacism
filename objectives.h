#ifndef OBJECTIVES_H
#define OBJECTIVES_H

#include "qplaintextedit.h"
#include <QFile>
#include <QDir>
#include <QPlainTextEdit>
#include <QTextStream>
#include <QMessageBox>

#include <QDialog>

namespace Ui {
class objectives;
}

class objectives : public QDialog
{
    Q_OBJECT

public:
    explicit objectives(QWidget *parent = nullptr);
    ~objectives();

private:
    Ui::objectives *ui;
    QPlainTextEdit *a;
};

#endif // OBJECTIVES_H
