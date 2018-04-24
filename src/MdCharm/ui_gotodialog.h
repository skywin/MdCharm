/********************************************************************************
** Form generated from reading UI file 'gotodialog.ui'
**
** Created: Thu Feb 22 11:06:55 2018
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GOTODIALOG_H
#define UI_GOTODIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_GotoDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *gotoLabel;
    QLineEdit *gotoLineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *GotoDialog)
    {
        if (GotoDialog->objectName().isEmpty())
            GotoDialog->setObjectName(QString::fromUtf8("GotoDialog"));
        GotoDialog->resize(233, 85);
        verticalLayout = new QVBoxLayout(GotoDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gotoLabel = new QLabel(GotoDialog);
        gotoLabel->setObjectName(QString::fromUtf8("gotoLabel"));

        verticalLayout->addWidget(gotoLabel);

        gotoLineEdit = new QLineEdit(GotoDialog);
        gotoLineEdit->setObjectName(QString::fromUtf8("gotoLineEdit"));

        verticalLayout->addWidget(gotoLineEdit);

        buttonBox = new QDialogButtonBox(GotoDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(GotoDialog);

        QMetaObject::connectSlotsByName(GotoDialog);
    } // setupUi

    void retranslateUi(QDialog *GotoDialog)
    {
        GotoDialog->setWindowTitle(QApplication::translate("GotoDialog", "Goto", 0, QApplication::UnicodeUTF8));
        gotoLabel->setText(QApplication::translate("GotoDialog", "Line(1 - 100)", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class GotoDialog: public Ui_GotoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOTODIALOG_H
