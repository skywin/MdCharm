/********************************************************************************
** Form generated from reading UI file 'noticedialog.ui'
**
** Created: Thu Feb 22 11:06:56 2018
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTICEDIALOG_H
#define UI_NOTICEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_NoticeDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *noticeLabel;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *NoticeDialog)
    {
        if (NoticeDialog->objectName().isEmpty())
            NoticeDialog->setObjectName(QString::fromUtf8("NoticeDialog"));
        NoticeDialog->resize(400, 142);
        gridLayout = new QGridLayout(NoticeDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        noticeLabel = new QLabel(NoticeDialog);
        noticeLabel->setObjectName(QString::fromUtf8("noticeLabel"));
        noticeLabel->setWordWrap(true);
        noticeLabel->setOpenExternalLinks(true);

        gridLayout->addWidget(noticeLabel, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(NoticeDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 1);


        retranslateUi(NoticeDialog);

        QMetaObject::connectSlotsByName(NoticeDialog);
    } // setupUi

    void retranslateUi(QDialog *NoticeDialog)
    {
        NoticeDialog->setWindowTitle(QApplication::translate("NoticeDialog", "Notice", 0, QApplication::UnicodeUTF8));
        noticeLabel->setText(QApplication::translate("NoticeDialog", "Notice", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class NoticeDialog: public Ui_NoticeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTICEDIALOG_H
