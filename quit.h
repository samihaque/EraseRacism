#ifndef QUIT_H
#define QUIT_H

#include "qplaintextedit.h"
#include <QFile>
#include <QDir>
#include <QPlainTextEdit>
#include <QTextStream>
#include <QMessageBox>

#include <QDialog>


namespace Ui {
class quit;
}

class quit : public QDialog
{
    Q_OBJECT

public:
    explicit quit(QWidget *parent = nullptr);
    ~quit();

private slots:
  ///  void on_pushButton_clicked();

    void on_noquit_clicked();

    void on_yesquit_clicked();

private:
    Ui::quit *ui;
    QPlainTextEdit *a;
    //mainmenu * window2 = new mainmenu();
};

#endif // QUIT_H
