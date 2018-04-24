/********************************************************************************
** Form generated from reading UI file 'spellcheckselectordialog.ui'
**
** Created: Thu Feb 22 11:06:56 2018
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPELLCHECKSELECTORDIALOG_H
#define UI_SPELLCHECKSELECTORDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SpellCheckSelectorDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *languageComboBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SpellCheckSelectorDialog)
    {
        if (SpellCheckSelectorDialog->objectName().isEmpty())
            SpellCheckSelectorDialog->setObjectName(QString::fromUtf8("SpellCheckSelectorDialog"));
        SpellCheckSelectorDialog->resize(235, 69);
        verticalLayout = new QVBoxLayout(SpellCheckSelectorDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(SpellCheckSelectorDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        languageComboBox = new QComboBox(SpellCheckSelectorDialog);
        languageComboBox->setObjectName(QString::fromUtf8("languageComboBox"));

        horizontalLayout->addWidget(languageComboBox);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(SpellCheckSelectorDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SpellCheckSelectorDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SpellCheckSelectorDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SpellCheckSelectorDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SpellCheckSelectorDialog);
    } // setupUi

    void retranslateUi(QDialog *SpellCheckSelectorDialog)
    {
        SpellCheckSelectorDialog->setWindowTitle(QApplication::translate("SpellCheckSelectorDialog", "Select Language", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SpellCheckSelectorDialog", "Language:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SpellCheckSelectorDialog: public Ui_SpellCheckSelectorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPELLCHECKSELECTORDIALOG_H
