#ifndef QUESTION4_H
#define QUESTION4_H

#include <QDialog>
#include "question4answer.h"
#include "question4correctans.h"
#include <QMessageBox>
#include "question.h"

namespace Ui {
class question4;
}

class question4 : public QDialog
{
    Q_OBJECT

public:
    explicit question4(QWidget *parent = nullptr);
    ~question4();

private slots:
    void on_pushButton_clicked();

private:
    Ui::question4 *ui;
};

#endif // QUESTION4_H
