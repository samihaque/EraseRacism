#ifndef QUESTION3ANSWER_H
#define QUESTION3ANSWER_H

#include <QDialog>
#include "question4.h"

namespace Ui {
class question3answer;
}

class question3answer : public QDialog
{
    Q_OBJECT

public:
    explicit question3answer(QWidget *parent = nullptr);
    ~question3answer();

private slots:
    void on_pushButton_clicked();

private:
    Ui::question3answer *ui;
};

#endif // QUESTION3ANSWER_H
