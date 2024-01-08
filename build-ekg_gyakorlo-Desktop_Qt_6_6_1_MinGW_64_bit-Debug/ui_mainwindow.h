/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_kat00;
    QWidget *centralwidget;
    QPushButton *uj_regisztratum;
    QPushButton *valasz_A;
    QPushButton *valasz_B;
    QPushButton *valasz_C;
    QPushButton *valasz_D;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *menuBe_ll_t_sok;
    QMenu *menuKateg_ri_k;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(642, 495);
        action_kat00 = new QAction(MainWindow);
        action_kat00->setObjectName("action_kat00");
        action_kat00->setCheckable(true);
        action_kat00->setChecked(true);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        uj_regisztratum = new QPushButton(centralwidget);
        uj_regisztratum->setObjectName("uj_regisztratum");
        uj_regisztratum->setGeometry(QRect(220, 20, 101, 31));
        valasz_A = new QPushButton(centralwidget);
        valasz_A->setObjectName("valasz_A");
        valasz_A->setGeometry(QRect(90, 350, 171, 31));
        valasz_B = new QPushButton(centralwidget);
        valasz_B->setObjectName("valasz_B");
        valasz_B->setGeometry(QRect(310, 350, 171, 31));
        valasz_C = new QPushButton(centralwidget);
        valasz_C->setObjectName("valasz_C");
        valasz_C->setGeometry(QRect(90, 400, 171, 31));
        valasz_D = new QPushButton(centralwidget);
        valasz_D->setObjectName("valasz_D");
        valasz_D->setGeometry(QRect(310, 400, 171, 31));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 60, 471, 251));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 642, 21));
        menuBe_ll_t_sok = new QMenu(menubar);
        menuBe_ll_t_sok->setObjectName("menuBe_ll_t_sok");
        menuKateg_ri_k = new QMenu(menuBe_ll_t_sok);
        menuKateg_ri_k->setObjectName("menuKateg_ri_k");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuBe_ll_t_sok->menuAction());
        menuBe_ll_t_sok->addAction(menuKateg_ri_k->menuAction());
        menuKateg_ri_k->addAction(action_kat00);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action_kat00->setText(QCoreApplication::translate("MainWindow", "BEVEZET\305\220 G\303\226RB\303\211K, P\303\223T\303\234T\303\211SEK", nullptr));
        uj_regisztratum->setText(QCoreApplication::translate("MainWindow", "\303\232j regisztr\303\241tum", nullptr));
        valasz_A->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        valasz_B->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        valasz_C->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        valasz_D->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        label->setText(QString());
        menuBe_ll_t_sok->setTitle(QCoreApplication::translate("MainWindow", "Be\303\241ll\303\255t\303\241sok", nullptr));
        menuKateg_ri_k->setTitle(QCoreApplication::translate("MainWindow", "Kateg\303\263ri\303\241k", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
