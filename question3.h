#ifndef QUESTION3_H
#define QUESTION3_H

#include <QDialog>
#include "question3answer.h"
#include "question3correctans.h"
#include <QMessageBox>
#include "question.h"

namespace Ui {
class question3;
}

class question3 : public QDialog
{
    Q_OBJECT

public:
    explicit question3(QWidget *parent = nullptr);
    ~question3();

private slots:
    void on_pushButton_clicked();

private:
    Ui::question3 *ui;
};

#endif // QUESTION3_H
