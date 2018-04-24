/********************************************************************************
** Form generated from reading UI file 'addnewfiledialog.ui'
**
** Created: Thu Feb 22 11:06:55 2018
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDNEWFILEDIALOG_H
#define UI_ADDNEWFILEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddNewFileDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *infoLabel;
    QHBoxLayout *horizontalLayout;
    QLabel *parentDirLabel;
    QLineEdit *fileNameLineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AddNewFileDialog)
    {
        if (AddNewFileDialog->objectName().isEmpty())
            AddNewFileDialog->setObjectName(QString::fromUtf8("AddNewFileDialog"));
        AddNewFileDialog->resize(400, 91);
        verticalLayout = new QVBoxLayout(AddNewFileDialog);
        verticalLayout->setSpacing(3);
        verticalLayout->setContentsMargins(6, 6, 6, 6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        infoLabel = new QLabel(AddNewFileDialog);
        infoLabel->setObjectName(QString::fromUtf8("infoLabel"));

        verticalLayout->addWidget(infoLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, -1, 0, -1);
        parentDirLabel = new QLabel(AddNewFileDialog);
        parentDirLabel->setObjectName(QString::fromUtf8("parentDirLabel"));

        horizontalLayout->addWidget(parentDirLabel);

        fileNameLineEdit = new QLineEdit(AddNewFileDialog);
        fileNameLineEdit->setObjectName(QString::fromUtf8("fileNameLineEdit"));
        fileNameLineEdit->setMinimumSize(QSize(160, 0));

        horizontalLayout->addWidget(fileNameLineEdit);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(AddNewFileDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(AddNewFileDialog);

        QMetaObject::connectSlotsByName(AddNewFileDialog);
    } // setupUi

    void retranslateUi(QDialog *AddNewFileDialog)
    {
        AddNewFileDialog->setWindowTitle(QApplication::translate("AddNewFileDialog", "Add new file", 0, QApplication::UnicodeUTF8));
        infoLabel->setText(QApplication::translate("AddNewFileDialog", "Enter new markdown file name:", 0, QApplication::UnicodeUTF8));
        parentDirLabel->setText(QApplication::translate("AddNewFileDialog", "path", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AddNewFileDialog: public Ui_AddNewFileDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNEWFILEDIALOG_H
