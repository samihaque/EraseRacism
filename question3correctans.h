#ifndef QUESTION3CORRECTANS_H
#define QUESTION3CORRECTANS_H

#include <QDialog>
#include "question4.h"
namespace Ui {
class question3correctans;
}

class question3correctans : public QDialog
{
    Q_OBJECT

public:
    explicit question3correctans(QWidget *parent = nullptr);
    ~question3correctans();

private slots:
    void on_pushButton_clicked();

private:
    Ui::question3correctans *ui;
};

#endif // QUESTION3CORRECTANS_H
