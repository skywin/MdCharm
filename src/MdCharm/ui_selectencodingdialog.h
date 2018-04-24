/********************************************************************************
** Form generated from reading UI file 'selectencodingdialog.ui'
**
** Created: Thu Feb 22 11:06:55 2018
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTENCODINGDIALOG_H
#define UI_SELECTENCODINGDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SelectEncodingDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *encodingComboBox;
    QSpacerItem *horizontalSpacer;
    QCheckBox *reloadFileCheckBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SelectEncodingDialog)
    {
        if (SelectEncodingDialog->objectName().isEmpty())
            SelectEncodingDialog->setObjectName(QString::fromUtf8("SelectEncodingDialog"));
        SelectEncodingDialog->resize(185, 85);
        verticalLayout = new QVBoxLayout(SelectEncodingDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(SelectEncodingDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        encodingComboBox = new QComboBox(SelectEncodingDialog);
        encodingComboBox->setObjectName(QString::fromUtf8("encodingComboBox"));

        horizontalLayout->addWidget(encodingComboBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        reloadFileCheckBox = new QCheckBox(SelectEncodingDialog);
        reloadFileCheckBox->setObjectName(QString::fromUtf8("reloadFileCheckBox"));

        verticalLayout->addWidget(reloadFileCheckBox);

        buttonBox = new QDialogButtonBox(SelectEncodingDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SelectEncodingDialog);

        QMetaObject::connectSlotsByName(SelectEncodingDialog);
    } // setupUi

    void retranslateUi(QDialog *SelectEncodingDialog)
    {
        SelectEncodingDialog->setWindowTitle(QApplication::translate("SelectEncodingDialog", "Change File Encoding", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        SelectEncodingDialog->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        label->setText(QApplication::translate("SelectEncodingDialog", "File Encoding:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        encodingComboBox->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        reloadFileCheckBox->setText(QApplication::translate("SelectEncodingDialog", "Reload File", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SelectEncodingDialog: public Ui_SelectEncodingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTENCODINGDIALOG_H
