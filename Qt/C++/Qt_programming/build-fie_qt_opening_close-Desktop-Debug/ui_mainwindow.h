/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOuvrir;
    QAction *actionQuit;
    QAction *actionOuvrir_2;
    QAction *actionQuitter;
    QAction *actionAbout;
    QAction *action_etc_passwd;
    QAction *action_etc_group;
    QWidget *centralWidget;
    QTextEdit *textEdit;
    QLabel *label;
    QMenuBar *menuBar;
    QMenu *menuMenu;
    QMenu *menuDernier_fiche_ouvrir;
    QMenu *menuAide;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(464, 377);
        actionOuvrir = new QAction(MainWindow);
        actionOuvrir->setObjectName(QStringLiteral("actionOuvrir"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        actionOuvrir_2 = new QAction(MainWindow);
        actionOuvrir_2->setObjectName(QStringLiteral("actionOuvrir_2"));
        actionQuitter = new QAction(MainWindow);
        actionQuitter->setObjectName(QStringLiteral("actionQuitter"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        action_etc_passwd = new QAction(MainWindow);
        action_etc_passwd->setObjectName(QStringLiteral("action_etc_passwd"));
        action_etc_group = new QAction(MainWindow);
        action_etc_group->setObjectName(QStringLiteral("action_etc_group"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(10, 10, 256, 192));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(320, 100, 67, 17));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 464, 22));
        menuMenu = new QMenu(menuBar);
        menuMenu->setObjectName(QStringLiteral("menuMenu"));
        menuDernier_fiche_ouvrir = new QMenu(menuMenu);
        menuDernier_fiche_ouvrir->setObjectName(QStringLiteral("menuDernier_fiche_ouvrir"));
        menuAide = new QMenu(menuBar);
        menuAide->setObjectName(QStringLiteral("menuAide"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuMenu->menuAction());
        menuBar->addAction(menuAide->menuAction());
        menuMenu->addAction(actionOuvrir_2);
        menuMenu->addAction(actionQuitter);
        menuMenu->addAction(menuDernier_fiche_ouvrir->menuAction());
        menuDernier_fiche_ouvrir->addAction(action_etc_passwd);
        menuDernier_fiche_ouvrir->addAction(action_etc_group);
        menuAide->addAction(actionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionOuvrir->setText(QApplication::translate("MainWindow", "Ouvrir", Q_NULLPTR));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", Q_NULLPTR));
        actionOuvrir_2->setText(QApplication::translate("MainWindow", "Ouvrir", Q_NULLPTR));
        actionQuitter->setText(QApplication::translate("MainWindow", "Quitter", Q_NULLPTR));
        actionAbout->setText(QApplication::translate("MainWindow", "About", Q_NULLPTR));
        action_etc_passwd->setText(QApplication::translate("MainWindow", "/etc/passwd", Q_NULLPTR));
        action_etc_group->setText(QApplication::translate("MainWindow", "/etc/group", Q_NULLPTR));
        label->setText(QString());
        menuMenu->setTitle(QApplication::translate("MainWindow", "Menu", Q_NULLPTR));
        menuDernier_fiche_ouvrir->setTitle(QApplication::translate("MainWindow", "Dernier fiche ouvrir", Q_NULLPTR));
        menuAide->setTitle(QApplication::translate("MainWindow", "Aide", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
