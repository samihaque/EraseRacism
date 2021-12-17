#include "mainmenu.h"

#include <QApplication>


//int maxScore = 100;
//int minScore = 0;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    mainmenu Mm;
    Mm.show();
    return a.exec();
}
