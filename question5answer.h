#ifndef QUESTION5ANSWER_H
#define QUESTION5ANSWER_H

#include <QDialog>
#include "question6.h"

namespace Ui {
class question5answer;
}

class question5answer : public QDialog
{
    Q_OBJECT

public:
    explicit question5answer(QWidget *parent = nullptr);
    ~question5answer();

private slots:
    void on_pushButton_clicked();

private:
    Ui::question5answer *ui;
};

#endif // QUESTION5ANSWER_H
