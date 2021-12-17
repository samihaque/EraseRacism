#ifndef QUESTION6_H
#define QUESTION6_H

#include <QDialog>
#include "question6answer.h"
#include "question6correctans.h"
#include <QMessageBox>
#include "question.h"

namespace Ui {
class question6;
}

class question6 : public QDialog
{
    Q_OBJECT

public:
    explicit question6(QWidget *parent = nullptr);
    ~question6();

private slots:
    void on_pushButton_clicked();

private:
    Ui::question6 *ui;
};

#endif // QUESTION6_H
