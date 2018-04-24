/********************************************************************************
** Form generated from reading UI file 'insertcodedialog.ui'
**
** Created: Thu Feb 22 11:06:56 2018
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSERTCODEDIALOG_H
#define UI_INSERTCODEDIALOG_H

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

class Ui_InsertCodeDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *codeTypeComboBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *InsertCodeDialog)
    {
        if (InsertCodeDialog->objectName().isEmpty())
            InsertCodeDialog->setObjectName(QString::fromUtf8("InsertCodeDialog"));
        InsertCodeDialog->resize(193, 69);
        verticalLayout = new QVBoxLayout(InsertCodeDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(InsertCodeDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        codeTypeComboBox = new QComboBox(InsertCodeDialog);
        codeTypeComboBox->setObjectName(QString::fromUtf8("codeTypeComboBox"));

        horizontalLayout->addWidget(codeTypeComboBox);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(InsertCodeDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(InsertCodeDialog);

        QMetaObject::connectSlotsByName(InsertCodeDialog);
    } // setupUi

    void retranslateUi(QDialog *InsertCodeDialog)
    {
        InsertCodeDialog->setWindowTitle(QApplication::translate("InsertCodeDialog", "Select code type", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("InsertCodeDialog", "Code type:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class InsertCodeDialog: public Ui_InsertCodeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSERTCODEDIALOG_H
