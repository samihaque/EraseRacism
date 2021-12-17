#ifndef QUESTION4CORRECTANS_H
#define QUESTION4CORRECTANS_H

#include <QDialog>
#include "question5.h"

namespace Ui {
class question4correctans;
}

class question4correctans : public QDialog
{
    Q_OBJECT

public:
    explicit question4correctans(QWidget *parent = nullptr);
    ~question4correctans();

private slots:
    void on_pushButton_clicked();

private:
    Ui::question4correctans *ui;
};

#endif // QUESTION4CORRECTANS_H
