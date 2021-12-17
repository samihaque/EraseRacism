#ifndef PASSED_H
#define PASSED_H

#include <QDialog>

namespace Ui {
class Passed;
}

class Passed : public QDialog
{
    Q_OBJECT

public:
    explicit Passed(QWidget *parent = nullptr);
    ~Passed();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Passed *ui;
};

#endif // PASSED_H
