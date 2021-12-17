#ifndef QUESTION7_H
#define QUESTION7_H

#include <QDialog>
#include "question7answer.h"
#include "question7correctans.h"
#include <QMessageBox>
#include "question.h"

namespace Ui {
class question7;
}

class question7 : public QDialog
{
    Q_OBJECT

public:
    explicit question7(QWidget *parent = nullptr);
    ~question7();

private slots:
    void on_pushButton_clicked();

private:
    Ui::question7 *ui;
};

#endif // QUESTION7_H
