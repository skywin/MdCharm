/********************************************************************************
** Form generated from reading UI file 'stylespage.ui'
**
** Created: Thu Feb 22 11:06:55 2018
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STYLESPAGE_H
#define UI_STYLESPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StylesPage
{
public:
    QWidget *markdown;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *useDefaultCheckBox;
    QPlainTextEdit *customCSSPlainTextEdit;

    void setupUi(QTabWidget *StylesPage)
    {
        if (StylesPage->objectName().isEmpty())
            StylesPage->setObjectName(QString::fromUtf8("StylesPage"));
        StylesPage->resize(400, 300);
        markdown = new QWidget();
        markdown->setObjectName(QString::fromUtf8("markdown"));
        verticalLayout = new QVBoxLayout(markdown);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(markdown);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        useDefaultCheckBox = new QCheckBox(groupBox);
        useDefaultCheckBox->setObjectName(QString::fromUtf8("useDefaultCheckBox"));

        verticalLayout_2->addWidget(useDefaultCheckBox);

        customCSSPlainTextEdit = new QPlainTextEdit(groupBox);
        customCSSPlainTextEdit->setObjectName(QString::fromUtf8("customCSSPlainTextEdit"));

        verticalLayout_2->addWidget(customCSSPlainTextEdit);


        verticalLayout->addWidget(groupBox);

        StylesPage->addTab(markdown, QString());

        retranslateUi(StylesPage);

        StylesPage->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(StylesPage);
    } // setupUi

    void retranslateUi(QTabWidget *StylesPage)
    {
        StylesPage->setWindowTitle(QApplication::translate("StylesPage", "TabWidget", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("StylesPage", "CSS", 0, QApplication::UnicodeUTF8));
        useDefaultCheckBox->setText(QApplication::translate("StylesPage", "Use default stylesheet", 0, QApplication::UnicodeUTF8));
        StylesPage->setTabText(StylesPage->indexOf(markdown), QApplication::translate("StylesPage", "Markdown", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class StylesPage: public Ui_StylesPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STYLESPAGE_H
