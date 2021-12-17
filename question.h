#ifndef QUESTION_H
#define QUESTION_H

#include <QDialog>
#include "ui_question.h"
extern int score;
extern int passScore;
//qint8 score = 0;
//qint8 passScore = 70;
namespace Ui {
class Question;
}

class Question : public QDialog
{
    Q_OBJECT

public:
    explicit Question(QWidget *parent = nullptr);

    //virtual void checkScore()=0;
    //virtual void display()=0;
    ~Question();

//private slots:
//    void on_lcdNumber_windowTitleChanged(const QString &title);

private:
    Ui::Question *ui;
};

#endif // QUESTION_H
