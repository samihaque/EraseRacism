#ifndef QUESTION6ANSWER_H
#define QUESTION6ANSWER_H

#include <QDialog>
#include "question7.h"

namespace Ui {
class question6answer;
}

class question6answer : public QDialog
{
    Q_OBJECT

public:
    explicit question6answer(QWidget *parent = nullptr);
    ~question6answer();

private slots:
    void on_pushButton_clicked();

private:
    Ui::question6answer *ui;
};

#endif // QUESTION6ANSWER_H
