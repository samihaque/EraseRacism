#ifndef QUESTION1ANSWER_H
#define QUESTION1ANSWER_H

#include <QDialog>
#include "question2.h"
#include "question.h"
namespace Ui {
class question1answer;
}

class question1answer : public QDialog
{
    Q_OBJECT

public:
    explicit question1answer(QWidget *parent = nullptr);
    ~question1answer();

private slots:
    void on_pushButton_clicked();

private:
    Ui::question1answer *ui;
};

#endif // QUESTION1ANSWER_H
