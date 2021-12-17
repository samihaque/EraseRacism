#ifndef ABOUT_H
#define ABOUT_H

#include "qplaintextedit.h"
#include <QFile>
#include <QDir>
#include <QPlainTextEdit>
#include <QTextStream>
#include <QMessageBox>
#include <QDialog>

namespace Ui {
class about;
}

class about : public QDialog
{
    Q_OBJECT

public:
    explicit about(QWidget *parent = nullptr);
    ~about();

private:
    Ui::about *ui;
    QPlainTextEdit *a;
};

#endif // ABOUT_H
