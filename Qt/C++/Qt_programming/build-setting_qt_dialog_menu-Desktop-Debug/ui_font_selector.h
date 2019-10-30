/********************************************************************************
** Form generated from reading UI file 'font_selector.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FONT_SELECTOR_H
#define UI_FONT_SELECTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Font_Selector
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QFontComboBox *fontComboBox;
    QSpinBox *spinBox;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *Font_Selector)
    {
        if (Font_Selector->objectName().isEmpty())
            Font_Selector->setObjectName(QStringLiteral("Font_Selector"));
        Font_Selector->resize(400, 300);
        layoutWidget = new QWidget(Font_Selector);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 100, 260, 28));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        fontComboBox = new QFontComboBox(layoutWidget);
        fontComboBox->setObjectName(QStringLiteral("fontComboBox"));

        horizontalLayout->addWidget(fontComboBox);

        spinBox = new QSpinBox(layoutWidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setMinimum(6);
        spinBox->setMaximum(100);

        horizontalLayout->addWidget(spinBox);

        label = new QLabel(Font_Selector);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 160, 208, 17));
        pushButton = new QPushButton(Font_Selector);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(50, 200, 258, 21));

        retranslateUi(Font_Selector);

        QMetaObject::connectSlotsByName(Font_Selector);
    } // setupUi

    void retranslateUi(QDialog *Font_Selector)
    {
        Font_Selector->setWindowTitle(QApplication::translate("Font_Selector", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("Font_Selector", "This is how your fonts look like", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Font_Selector", "Ok", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Font_Selector: public Ui_Font_Selector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FONT_SELECTOR_H
