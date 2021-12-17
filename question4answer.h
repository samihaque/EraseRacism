#ifndef QUESTION4ANSWER_H
#define QUESTION4ANSWER_H

#include <QDialog>
#include "question5.h"

namespace Ui {
class question4answer;
}

class question4answer : public QDialog
{
    Q_OBJECT

public:
    explicit question4answer(QWidget *parent = nullptr);
    ~question4answer();

private slots:
    void on_pushButton_clicked();

private:
    Ui::question4answer *ui;
};

#endif // QUESTION4ANSWER_H
