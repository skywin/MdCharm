/********************************************************************************
** Form generated from reading UI file 'renamefiledialog.ui'
**
** Created: Thu Feb 22 11:06:56 2018
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RENAMEFILEDIALOG_H
#define UI_RENAMEFILEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_RenameFileDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *infoLabel;
    QLineEdit *renameLineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RenameFileDialog)
    {
        if (RenameFileDialog->objectName().isEmpty())
            RenameFileDialog->setObjectName(QString::fromUtf8("RenameFileDialog"));
        RenameFileDialog->resize(327, 85);
        gridLayout = new QGridLayout(RenameFileDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        infoLabel = new QLabel(RenameFileDialog);
        infoLabel->setObjectName(QString::fromUtf8("infoLabel"));

        gridLayout->addWidget(infoLabel, 0, 0, 1, 1);

        renameLineEdit = new QLineEdit(RenameFileDialog);
        renameLineEdit->setObjectName(QString::fromUtf8("renameLineEdit"));

        gridLayout->addWidget(renameLineEdit, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(RenameFileDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 1);


        retranslateUi(RenameFileDialog);

        QMetaObject::connectSlotsByName(RenameFileDialog);
    } // setupUi

    void retranslateUi(QDialog *RenameFileDialog)
    {
        RenameFileDialog->setWindowTitle(QApplication::translate("RenameFileDialog", "Rename", 0, QApplication::UnicodeUTF8));
        infoLabel->setText(QApplication::translate("RenameFileDialog", "Rename file %1 to:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class RenameFileDialog: public Ui_RenameFileDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RENAMEFILEDIALOG_H
