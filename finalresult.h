#ifndef FINALRESULT_H
#define FINALRESULT_H

#include <QDialog>
#include "question.h"
#include "passed.h"
#include "failed.h"

namespace Ui {
class finalresult;
}

class finalresult : public QDialog
{
    Q_OBJECT

public:
    explicit finalresult(QWidget *parent = nullptr);
    bool checkpass();
    ~finalresult();

private slots:
    void on_pushButton_clicked();

private:
    Ui::finalresult *ui;
};

#endif // FINALRESULT_H
