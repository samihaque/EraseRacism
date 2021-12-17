#ifndef QUESTION5_H
#define QUESTION5_H

#include <QDialog>
#include "question5answer.h"
#include "question5correctans.h"
#include <QMessageBox>
#include "question.h"

namespace Ui {
class question5;
}

class question5 : public QDialog
{
    Q_OBJECT

public:
    explicit question5(QWidget *parent = nullptr);
    ~question5();

private slots:
    void on_pushButton_clicked();

private:
    Ui::question5 *ui;
};

#endif // QUESTION5_H
