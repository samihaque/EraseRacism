#include "question.h"
int score = 0;
int passScore = 70;
Question::Question(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Question)
{
    ui->setupUi(this);
}
//void Question:: checkScore(){
//    if (score < 70){
//        // failed
//    }
//    else if (score == 70){
//        // display passed with 70 score
//    }
//    if (score == 80){
//        // display passed with 80 score
//    }
//    if (score == 90){
//        // display passed with 90 score
//    }
//    if (score == 100){
//        // display passed with 100 score
//    }
//}
Question::~Question()
{
    delete ui;
}

