#ifndef QUESTION1_H
#define QUESTION1_H

#include <QDialog>
#include "question.h"
#include "question1answer.h"
#include "question1correctans.h"
#include <QMessageBox>

namespace Ui {
class question1;
}

class question1 : public QDialog
{
    Q_OBJECT

public:
    explicit question1(QWidget *parent = nullptr);
    ~question1();

private slots:
    void on_pushButton_clicked();

private:
    Ui::question1 *ui;

   // question1answer * nxtwindow = new question1answer();
   // question1correctans *nxtwindow2 = new question1correctans();
};

#endif // QUESTION1_H
