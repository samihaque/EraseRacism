#ifndef QUESTION1CORRECTANS_H
#define QUESTION1CORRECTANS_H

#include <QDialog>
#include "question2.h"

namespace Ui {
class question1correctans;
}

class question1correctans : public QDialog
{
    Q_OBJECT

public:
    explicit question1correctans(QWidget *parent = nullptr);
    ~question1correctans();

private slots:
    void on_pushButton_clicked();

private:
    Ui::question1correctans *ui;
};

#endif // QUESTION1CORRECTANS_H
