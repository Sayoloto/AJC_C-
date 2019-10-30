/********************************************************************************
** Form generated from reading UI file 'color_chooser.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLOR_CHOOSER_H
#define UI_COLOR_CHOOSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_color_chooser
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *color_chooser)
    {
        if (color_chooser->objectName().isEmpty())
            color_chooser->setObjectName(QStringLiteral("color_chooser"));
        color_chooser->resize(400, 300);
        buttonBox = new QDialogButtonBox(color_chooser);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(color_chooser);
        QObject::connect(buttonBox, SIGNAL(accepted()), color_chooser, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), color_chooser, SLOT(reject()));

        QMetaObject::connectSlotsByName(color_chooser);
    } // setupUi

    void retranslateUi(QDialog *color_chooser)
    {
        color_chooser->setWindowTitle(QApplication::translate("color_chooser", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class color_chooser: public Ui_color_chooser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLOR_CHOOSER_H
