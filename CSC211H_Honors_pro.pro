QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    about.cpp \
    failed.cpp \
    finalresult.cpp \
    help.cpp \
    main.cpp \
    mainmenu.cpp \
    menu.cpp \
    objectives.cpp \
    passed.cpp \
    playgame.cpp \
    question.cpp \
    question1.cpp \
    question1answer.cpp \
    question1correctans.cpp \
    question2.cpp \
    question2answer.cpp \
    question2correctans.cpp \
    question3.cpp \
    question3answer.cpp \
    question3correctans.cpp \
    question4.cpp \
    question4answer.cpp \
    question4correctans.cpp \
    question5.cpp \
    question5answer.cpp \
    question5correctans.cpp \
    question6.cpp \
    question6answer.cpp \
    question6correctans.cpp \
    question7.cpp \
    question7answer.cpp \
    question7correctans.cpp \
    quit.cpp

HEADERS += \
    about.h \
    failed.h \
    finalresult.h \
    help.h \
    mainmenu.h \
    menu.h \
    objectives.h \
    passed.h \
    playgame.h \
    question.h \
    question1.h \
    question1answer.h \
    question1correctans.h \
    question2.h \
    question2answer.h \
    question2correctans.h \
    question3.h \
    question3answer.h \
    question3correctans.h \
    question4.h \
    question4answer.h \
    question4correctans.h \
    question5.h \
    question5answer.h \
    question5correctans.h \
    question6.h \
    question6answer.h \
    question6correctans.h \
    question7.h \
    question7answer.h \
    question7correctans.h \
    quit.h

FORMS += \
    about.ui \
    failed.ui \
    finalresult.ui \
    help.ui \
    mainmenu.ui \
    menu.ui \
    objectives.ui \
    passed.ui \
    playgame.ui \
    question.ui \
    question1.ui \
    question1answer.ui \
    question1correctans.ui \
    question2.ui \
    question2answer.ui \
    question2correctans.ui \
    question3.ui \
    question3answer.ui \
    question3correctans.ui \
    question4.ui \
    question4answer.ui \
    question4correctans.ui \
    question5.ui \
    question5answer.ui \
    question5correctans.ui \
    question6.ui \
    question6answer.ui \
    question6correctans.ui \
    question7.ui \
    question7answer.ui \
    question7correctans.ui \
    quit.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    BG_image.qrc \
    black_BG.qrc \
    menufiles.qrc \
    pic \
    questionImage.qrc \
    questionpic
