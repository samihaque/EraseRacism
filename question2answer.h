#ifndef QUESTION2ANSWER_H
#define QUESTION2ANSWER_H

#include <QDialog>
#include "question3.h"

namespace Ui {
class question2answer;
}

class question2answer : public QDialog
{
    Q_OBJECT

public:
    explicit question2answer(QWidget *parent = nullptr);
    ~question2answer();

private slots:
    void on_pushButton_clicked();

private:
    Ui::question2answer *ui;
};

#endif // QUESTION2ANSWER_H
