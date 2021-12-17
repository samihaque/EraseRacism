#ifndef QUESTION5CORRECTANS_H
#define QUESTION5CORRECTANS_H

#include <QDialog>
#include "question6.h"

namespace Ui {
class question5correctans;
}

class question5correctans : public QDialog
{
    Q_OBJECT

public:
    explicit question5correctans(QWidget *parent = nullptr);
    ~question5correctans();

private slots:
    void on_pushButton_clicked();

private:
    Ui::question5correctans *ui;
};

#endif // QUESTION5CORRECTANS_H
