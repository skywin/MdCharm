/********************************************************************************
** Form generated from reading UI file 'insertlinkorpicturedialog.ui'
**
** Created: Thu Feb 22 11:06:56 2018
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSERTLINKORPICTUREDIALOG_H
#define UI_INSERTLINKORPICTUREDIALOG_H

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
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_InsertLinkOrPictureDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *widthLabel;
    QLabel *heightLabel;
    QLineEdit *widthLineEdit;
    QDialogButtonBox *buttonBox;
    QLineEdit *heightLineEdit;
    QLineEdit *titleLineEdit;
    QPushButton *insertLocalPushButton;
    QLabel *textLabel;
    QLineEdit *textLineEdit;
    QLabel *titleLabel;
    QLineEdit *urlLineEdit;
    QLabel *urlLabel;

    void setupUi(QDialog *InsertLinkOrPictureDialog)
    {
        if (InsertLinkOrPictureDialog->objectName().isEmpty())
            InsertLinkOrPictureDialog->setObjectName(QString::fromUtf8("InsertLinkOrPictureDialog"));
        InsertLinkOrPictureDialog->resize(427, 174);
        gridLayout = new QGridLayout(InsertLinkOrPictureDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widthLabel = new QLabel(InsertLinkOrPictureDialog);
        widthLabel->setObjectName(QString::fromUtf8("widthLabel"));
        widthLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(widthLabel, 3, 0, 1, 1);

        heightLabel = new QLabel(InsertLinkOrPictureDialog);
        heightLabel->setObjectName(QString::fromUtf8("heightLabel"));
        heightLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(heightLabel, 4, 0, 1, 1);

        widthLineEdit = new QLineEdit(InsertLinkOrPictureDialog);
        widthLineEdit->setObjectName(QString::fromUtf8("widthLineEdit"));

        gridLayout->addWidget(widthLineEdit, 3, 1, 1, 1);

        buttonBox = new QDialogButtonBox(InsertLinkOrPictureDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        gridLayout->addWidget(buttonBox, 5, 1, 1, 1);

        heightLineEdit = new QLineEdit(InsertLinkOrPictureDialog);
        heightLineEdit->setObjectName(QString::fromUtf8("heightLineEdit"));

        gridLayout->addWidget(heightLineEdit, 4, 1, 1, 1);

        titleLineEdit = new QLineEdit(InsertLinkOrPictureDialog);
        titleLineEdit->setObjectName(QString::fromUtf8("titleLineEdit"));

        gridLayout->addWidget(titleLineEdit, 2, 1, 1, 1);

        insertLocalPushButton = new QPushButton(InsertLinkOrPictureDialog);
        insertLocalPushButton->setObjectName(QString::fromUtf8("insertLocalPushButton"));

        gridLayout->addWidget(insertLocalPushButton, 0, 2, 1, 1);

        textLabel = new QLabel(InsertLinkOrPictureDialog);
        textLabel->setObjectName(QString::fromUtf8("textLabel"));
        textLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(textLabel, 1, 0, 1, 1);

        textLineEdit = new QLineEdit(InsertLinkOrPictureDialog);
        textLineEdit->setObjectName(QString::fromUtf8("textLineEdit"));

        gridLayout->addWidget(textLineEdit, 1, 1, 1, 1);

        titleLabel = new QLabel(InsertLinkOrPictureDialog);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        titleLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(titleLabel, 2, 0, 1, 1);

        urlLineEdit = new QLineEdit(InsertLinkOrPictureDialog);
        urlLineEdit->setObjectName(QString::fromUtf8("urlLineEdit"));

        gridLayout->addWidget(urlLineEdit, 0, 1, 1, 1);

        urlLabel = new QLabel(InsertLinkOrPictureDialog);
        urlLabel->setObjectName(QString::fromUtf8("urlLabel"));
        urlLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(urlLabel, 0, 0, 1, 1);

        QWidget::setTabOrder(urlLineEdit, textLineEdit);
        QWidget::setTabOrder(textLineEdit, titleLineEdit);
        QWidget::setTabOrder(titleLineEdit, buttonBox);

        retranslateUi(InsertLinkOrPictureDialog);

        QMetaObject::connectSlotsByName(InsertLinkOrPictureDialog);
    } // setupUi

    void retranslateUi(QDialog *InsertLinkOrPictureDialog)
    {
        InsertLinkOrPictureDialog->setWindowTitle(QApplication::translate("InsertLinkOrPictureDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        widthLabel->setText(QApplication::translate("InsertLinkOrPictureDialog", "Width:", 0, QApplication::UnicodeUTF8));
        heightLabel->setText(QApplication::translate("InsertLinkOrPictureDialog", "Height:", 0, QApplication::UnicodeUTF8));
        widthLineEdit->setPlaceholderText(QApplication::translate("InsertLinkOrPictureDialog", "optional", 0, QApplication::UnicodeUTF8));
        heightLineEdit->setPlaceholderText(QApplication::translate("InsertLinkOrPictureDialog", "optional", 0, QApplication::UnicodeUTF8));
        titleLineEdit->setPlaceholderText(QApplication::translate("InsertLinkOrPictureDialog", "optional", 0, QApplication::UnicodeUTF8));
        insertLocalPushButton->setText(QApplication::translate("InsertLinkOrPictureDialog", "Browse...", 0, QApplication::UnicodeUTF8));
        textLabel->setText(QApplication::translate("InsertLinkOrPictureDialog", "Link Text:", 0, QApplication::UnicodeUTF8));
        titleLabel->setText(QApplication::translate("InsertLinkOrPictureDialog", "Title:", 0, QApplication::UnicodeUTF8));
        urlLabel->setText(QApplication::translate("InsertLinkOrPictureDialog", "Link Url:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class InsertLinkOrPictureDialog: public Ui_InsertLinkOrPictureDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSERTLINKORPICTUREDIALOG_H
