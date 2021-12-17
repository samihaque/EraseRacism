#ifndef MENU_H
#define MENU_H

#include <QMainWindow>
#include <QApplication>
#include "mainmenu.h"
QT_BEGIN_NAMESPACE
namespace Ui { class Menu; }
QT_END_NAMESPACE

class Menu : public QMainWindow
{
    Q_OBJECT

public:
    Menu(QWidget *parent = nullptr);
    ~Menu();

private:
    Ui::Menu *ui;
};
#endif // MENU_H
