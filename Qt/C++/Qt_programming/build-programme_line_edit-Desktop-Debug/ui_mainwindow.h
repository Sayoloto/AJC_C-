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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionopen;
    QAction *actionclose;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_6;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_Nom;
    QLabel *label_Prenom;
    QLabel *label_datedenaissance;
    QLabel *label_Ville;
    QLabel *label_Addresse;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit;
    QLineEdit *Nom;
    QLineEdit *Prenom;
    QLineEdit *dateNaissance;
    QLineEdit *Ville;
    QLineEdit *Adresse;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_2;
    QWidget *tab_2;
    QGroupBox *groupBox;
    QMenuBar *menuBar;
    QMenu *menuProgramme_1;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(594, 446);
        actionopen = new QAction(MainWindow);
        actionopen->setObjectName(QStringLiteral("actionopen"));
        actionclose = new QAction(MainWindow);
        actionclose->setObjectName(QStringLiteral("actionclose"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_6 = new QVBoxLayout(centralWidget);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_5 = new QVBoxLayout(tab);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_4 = new QVBoxLayout(groupBox_2);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        splitter = new QSplitter(groupBox_2);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        label_Nom = new QLabel(layoutWidget);
        label_Nom->setObjectName(QStringLiteral("label_Nom"));

        verticalLayout->addWidget(label_Nom);

        label_Prenom = new QLabel(layoutWidget);
        label_Prenom->setObjectName(QStringLiteral("label_Prenom"));

        verticalLayout->addWidget(label_Prenom);

        label_datedenaissance = new QLabel(layoutWidget);
        label_datedenaissance->setObjectName(QStringLiteral("label_datedenaissance"));

        verticalLayout->addWidget(label_datedenaissance);

        label_Ville = new QLabel(layoutWidget);
        label_Ville->setObjectName(QStringLiteral("label_Ville"));

        verticalLayout->addWidget(label_Ville);

        label_Addresse = new QLabel(layoutWidget);
        label_Addresse->setObjectName(QStringLiteral("label_Addresse"));

        verticalLayout->addWidget(label_Addresse);

        splitter->addWidget(layoutWidget);
        layoutWidget1 = new QWidget(splitter);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(layoutWidget1);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout_2->addWidget(lineEdit);

        Nom = new QLineEdit(layoutWidget1);
        Nom->setObjectName(QStringLiteral("Nom"));
        Nom->setCursorMoveStyle(Qt::VisualMoveStyle);
        Nom->setClearButtonEnabled(false);

        verticalLayout_2->addWidget(Nom);

        Prenom = new QLineEdit(layoutWidget1);
        Prenom->setObjectName(QStringLiteral("Prenom"));

        verticalLayout_2->addWidget(Prenom);

        dateNaissance = new QLineEdit(layoutWidget1);
        dateNaissance->setObjectName(QStringLiteral("dateNaissance"));

        verticalLayout_2->addWidget(dateNaissance);

        Ville = new QLineEdit(layoutWidget1);
        Ville->setObjectName(QStringLiteral("Ville"));

        verticalLayout_2->addWidget(Ville);

        Adresse = new QLineEdit(layoutWidget1);
        Adresse->setObjectName(QStringLiteral("Adresse"));

        verticalLayout_2->addWidget(Adresse);

        splitter->addWidget(layoutWidget1);

        verticalLayout_3->addWidget(splitter);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(48, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        horizontalSpacer_2 = new QSpacerItem(78, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout);


        verticalLayout_4->addLayout(verticalLayout_3);


        verticalLayout_5->addWidget(groupBox_2);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        groupBox = new QGroupBox(tab_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(30, 30, 120, 80));
        tabWidget->addTab(tab_2, QString());

        verticalLayout_6->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 594, 22));
        menuProgramme_1 = new QMenu(menuBar);
        menuProgramme_1->setObjectName(QStringLiteral("menuProgramme_1"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
#ifndef QT_NO_SHORTCUT
        label->setBuddy(lineEdit);
        label_Nom->setBuddy(Nom);
        label_Prenom->setBuddy(Prenom);
        label_datedenaissance->setBuddy(dateNaissance);
        label_Ville->setBuddy(Ville);
        label_Addresse->setBuddy(Adresse);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(lineEdit, Nom);
        QWidget::setTabOrder(Nom, Prenom);
        QWidget::setTabOrder(Prenom, dateNaissance);
        QWidget::setTabOrder(dateNaissance, Ville);
        QWidget::setTabOrder(Ville, Adresse);
        QWidget::setTabOrder(Adresse, pushButton_2);
        QWidget::setTabOrder(pushButton_2, tabWidget);

        menuBar->addAction(menuProgramme_1->menuAction());
        menuProgramme_1->addAction(actionopen);
        menuProgramme_1->addAction(actionclose);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionopen->setText(QApplication::translate("MainWindow", "O&pen", Q_NULLPTR));
        actionclose->setText(QApplication::translate("MainWindow", "Cl&ose", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Personal Information", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "&Civilit\303\251", Q_NULLPTR));
        label_Nom->setText(QApplication::translate("MainWindow", "&Nom", Q_NULLPTR));
        label_Prenom->setText(QApplication::translate("MainWindow", "&Prenom", Q_NULLPTR));
        label_datedenaissance->setText(QApplication::translate("MainWindow", "&Naissance", Q_NULLPTR));
        label_Ville->setText(QApplication::translate("MainWindow", "&Ville", Q_NULLPTR));
        label_Addresse->setText(QApplication::translate("MainWindow", "&Addresse", Q_NULLPTR));
        Nom->setText(QApplication::translate("MainWindow", "Loto", Q_NULLPTR));
        Prenom->setText(QString());
        pushButton_2->setText(QApplication::translate("MainWindow", "Quit", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Tab 1", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "GroupBox", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Tab 2", Q_NULLPTR));
        menuProgramme_1->setTitle(QApplication::translate("MainWindow", "Menu", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
