/********************************************************************************
** Form generated from reading UI file 'exportdialog.ui'
**
** Created: Thu Feb 22 11:06:56 2018
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPORTDIALOG_H
#define UI_EXPORTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ExportDialog
{
public:
    QVBoxLayout *verticalLayout;
    QCheckBox *selectAllCheckBox;
    QGridLayout *gridLayout;
    QCheckBox *htmlCheckBox;
    QLineEdit *htmlLineEdit;
    QPushButton *htmlPushButton;
    QCheckBox *odtCheckBox;
    QLineEdit *odtLineEdit;
    QPushButton *odtPushButton;
    QCheckBox *pdfCheckBox;
    QLineEdit *pdfLineEdit;
    QPushButton *pdfPushButton;
    QHBoxLayout *horizontalLayout_4;
    QProgressBar *exportProgressBar;
    QDialogButtonBox *exportButtonBox;

    void setupUi(QDialog *ExportDialog)
    {
        if (ExportDialog->objectName().isEmpty())
            ExportDialog->setObjectName(QString::fromUtf8("ExportDialog"));
        ExportDialog->resize(400, 182);
        verticalLayout = new QVBoxLayout(ExportDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        selectAllCheckBox = new QCheckBox(ExportDialog);
        selectAllCheckBox->setObjectName(QString::fromUtf8("selectAllCheckBox"));

        verticalLayout->addWidget(selectAllCheckBox);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        htmlCheckBox = new QCheckBox(ExportDialog);
        htmlCheckBox->setObjectName(QString::fromUtf8("htmlCheckBox"));

        gridLayout->addWidget(htmlCheckBox, 0, 0, 1, 1);

        htmlLineEdit = new QLineEdit(ExportDialog);
        htmlLineEdit->setObjectName(QString::fromUtf8("htmlLineEdit"));

        gridLayout->addWidget(htmlLineEdit, 0, 1, 1, 1);

        htmlPushButton = new QPushButton(ExportDialog);
        htmlPushButton->setObjectName(QString::fromUtf8("htmlPushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(htmlPushButton->sizePolicy().hasHeightForWidth());
        htmlPushButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(htmlPushButton, 0, 2, 1, 1);

        odtCheckBox = new QCheckBox(ExportDialog);
        odtCheckBox->setObjectName(QString::fromUtf8("odtCheckBox"));

        gridLayout->addWidget(odtCheckBox, 1, 0, 1, 1);

        odtLineEdit = new QLineEdit(ExportDialog);
        odtLineEdit->setObjectName(QString::fromUtf8("odtLineEdit"));

        gridLayout->addWidget(odtLineEdit, 1, 1, 1, 1);

        odtPushButton = new QPushButton(ExportDialog);
        odtPushButton->setObjectName(QString::fromUtf8("odtPushButton"));
        sizePolicy.setHeightForWidth(odtPushButton->sizePolicy().hasHeightForWidth());
        odtPushButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(odtPushButton, 1, 2, 1, 1);

        pdfCheckBox = new QCheckBox(ExportDialog);
        pdfCheckBox->setObjectName(QString::fromUtf8("pdfCheckBox"));

        gridLayout->addWidget(pdfCheckBox, 2, 0, 1, 1);

        pdfLineEdit = new QLineEdit(ExportDialog);
        pdfLineEdit->setObjectName(QString::fromUtf8("pdfLineEdit"));

        gridLayout->addWidget(pdfLineEdit, 2, 1, 1, 1);

        pdfPushButton = new QPushButton(ExportDialog);
        pdfPushButton->setObjectName(QString::fromUtf8("pdfPushButton"));
        sizePolicy.setHeightForWidth(pdfPushButton->sizePolicy().hasHeightForWidth());
        pdfPushButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pdfPushButton, 2, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        exportProgressBar = new QProgressBar(ExportDialog);
        exportProgressBar->setObjectName(QString::fromUtf8("exportProgressBar"));
        exportProgressBar->setValue(0);

        horizontalLayout_4->addWidget(exportProgressBar);


        verticalLayout->addLayout(horizontalLayout_4);

        exportButtonBox = new QDialogButtonBox(ExportDialog);
        exportButtonBox->setObjectName(QString::fromUtf8("exportButtonBox"));
        exportButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(exportButtonBox);


        retranslateUi(ExportDialog);

        QMetaObject::connectSlotsByName(ExportDialog);
    } // setupUi

    void retranslateUi(QDialog *ExportDialog)
    {
        ExportDialog->setWindowTitle(QApplication::translate("ExportDialog", "Export...", 0, QApplication::UnicodeUTF8));
        selectAllCheckBox->setText(QApplication::translate("ExportDialog", "Select all", 0, QApplication::UnicodeUTF8));
        htmlCheckBox->setText(QApplication::translate("ExportDialog", "HTML", 0, QApplication::UnicodeUTF8));
        htmlPushButton->setText(QApplication::translate("ExportDialog", "Browse...", 0, QApplication::UnicodeUTF8));
        odtCheckBox->setText(QApplication::translate("ExportDialog", "ODT", 0, QApplication::UnicodeUTF8));
        odtPushButton->setText(QApplication::translate("ExportDialog", "Browse...", 0, QApplication::UnicodeUTF8));
        pdfCheckBox->setText(QApplication::translate("ExportDialog", "PDF", 0, QApplication::UnicodeUTF8));
        pdfPushButton->setText(QApplication::translate("ExportDialog", "Browse...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ExportDialog: public Ui_ExportDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPORTDIALOG_H
