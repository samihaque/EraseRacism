#ifndef MAINMENU_H
#define MAINMENU_H

#include "help.h"
#include "objectives.h"
#include "playgame.h"
#include "question1.h"
#include "about.h"
#include "quit.h"
#include <QDialog>

namespace Ui {
class mainmenu;
}

class mainmenu : public QDialog
{
    Q_OBJECT

public:
    explicit mainmenu(QWidget *parent = nullptr);
    ~mainmenu();


private slots:
    void on_help_clicked();

    void on_objectives_clicked();

    void on_about_clicked();

    void on_quitGame_clicked();

    void on_playGame_clicked();

private:
    Ui::mainmenu *ui;
    quit * window2 = new quit();
};

#endif // MAINMENU_H
