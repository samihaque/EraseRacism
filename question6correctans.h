#ifndef QUESTION6CORRECTANS_H
#define QUESTION6CORRECTANS_H

#include <QDialog>
#include "question7.h"

namespace Ui {
class question6correctans;
}

class question6correctans : public QDialog
{
    Q_OBJECT

public:
    explicit question6correctans(QWidget *parent = nullptr);
    ~question6correctans();

private slots:
    void on_pushButton_clicked();

private:
    Ui::question6correctans *ui;
};

#endif // QUESTION6CORRECTANS_H
