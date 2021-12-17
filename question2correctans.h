#ifndef QUESTION2CORRECTANS_H
#define QUESTION2CORRECTANS_H

#include <QDialog>
#include "question3.h"

namespace Ui {
class question2correctans;
}

class question2correctans : public QDialog
{
    Q_OBJECT

public:
    explicit question2correctans(QWidget *parent = nullptr);
    ~question2correctans();

private slots:
    void on_pushButton_clicked();

private:
    Ui::question2correctans *ui;
};

#endif // QUESTION2CORRECTANS_H
