#ifndef QUESTION2_H
#define QUESTION2_H

#include <QDialog>
#include "question2answer.h"
#include "question2correctans.h"
#include <QMessageBox>
#include "question.h"

namespace Ui {
class question2;
}

class question2 : public QDialog
{
    Q_OBJECT

public:
    explicit question2(QWidget *parent = nullptr);
    ~question2();

private slots:
    void on_pushButton_clicked();

private:
    Ui::question2 *ui;
};

#endif // QUESTION2_H
