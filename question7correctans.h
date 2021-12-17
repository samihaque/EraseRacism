#ifndef QUESTION7CORRECTANS_H
#define QUESTION7CORRECTANS_H

#include <QDialog>
#include "finalresult.h"

namespace Ui {
class question7correctans;
}

class question7correctans : public QDialog
{
    Q_OBJECT

public:
    explicit question7correctans(QWidget *parent = nullptr);
    ~question7correctans();

private slots:
    void on_pushButton_clicked();

private:
    Ui::question7correctans *ui;
};

#endif // QUESTION7CORRECTANS_H
