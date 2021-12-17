#ifndef PLAYGAME_H
#define PLAYGAME_H


#include "qplaintextedit.h"
#include <QFile>
#include <QDir>
#include <QPlainTextEdit>
#include <QTextStream>
#include <QMessageBox>
#include <QDialog>

namespace Ui {
class playgame;
}

class playgame : public QDialog
{
    Q_OBJECT

public:
    explicit playgame(QWidget *parent = nullptr);
    ~playgame();

private:
    Ui::playgame *ui;
};

#endif // PLAYGAME_H
