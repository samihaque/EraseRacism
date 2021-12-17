#ifndef QUESTION7ANSWER_H
#define QUESTION7ANSWER_H

#include <QDialog>
#include "finalresult.h"

namespace Ui {
class question7answer;
}

class question7answer : public QDialog
{
    Q_OBJECT

public:
    explicit question7answer(QWidget *parent = nullptr);
    ~question7answer();

private slots:
    void on_pushButton_clicked();

private:
    Ui::question7answer *ui;
};

#endif // QUESTION7ANSWER_H
