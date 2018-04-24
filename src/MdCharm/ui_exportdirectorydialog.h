/********************************************************************************
** Form generated from reading UI file 'exportdirectorydialog.ui'
**
** Created: Thu Feb 22 11:06:56 2018
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPORTDIRECTORYDIALOG_H
#define UI_EXPORTDIRECTORYDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTreeView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExportDirectoryDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *dirPathLineEdit;
    QCheckBox *suddirCheckBox;
    QPushButton *browerPushButton;
    QHBoxLayout *horizontalLayout_2;
    QTreeView *filesTreeView;
    QVBoxLayout *verticalLayout;
    QPushButton *upPushButton;
    QPushButton *downPushButton;
    QPushButton *removePushButton;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *seperateHtmlRadioButton;
    QRadioButton *singleHtmlRadioButton;
    QRadioButton *seperatePDFRadioButton;
    QRadioButton *singlePDFRadioButton;
    QCheckBox *seperateCssAndHtmlcheckBox;
    QCheckBox *keepDirCheckBox;
    QWidget *exportPathWidget;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QLineEdit *exportLineEdit;
    QPushButton *exportPathBrowerPushButton;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *exportPushButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *ExportDirectoryDialog)
    {
        if (ExportDirectoryDialog->objectName().isEmpty())
            ExportDirectoryDialog->setObjectName(QString::fromUtf8("ExportDirectoryDialog"));
        ExportDirectoryDialog->resize(686, 475);
        verticalLayout_2 = new QVBoxLayout(ExportDirectoryDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(ExportDirectoryDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        dirPathLineEdit = new QLineEdit(ExportDirectoryDialog);
        dirPathLineEdit->setObjectName(QString::fromUtf8("dirPathLineEdit"));

        horizontalLayout->addWidget(dirPathLineEdit);

        suddirCheckBox = new QCheckBox(ExportDirectoryDialog);
        suddirCheckBox->setObjectName(QString::fromUtf8("suddirCheckBox"));

        horizontalLayout->addWidget(suddirCheckBox);

        browerPushButton = new QPushButton(ExportDirectoryDialog);
        browerPushButton->setObjectName(QString::fromUtf8("browerPushButton"));

        horizontalLayout->addWidget(browerPushButton);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        filesTreeView = new QTreeView(ExportDirectoryDialog);
        filesTreeView->setObjectName(QString::fromUtf8("filesTreeView"));

        horizontalLayout_2->addWidget(filesTreeView);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        upPushButton = new QPushButton(ExportDirectoryDialog);
        upPushButton->setObjectName(QString::fromUtf8("upPushButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/prev.png"), QSize(), QIcon::Normal, QIcon::Off);
        upPushButton->setIcon(icon);

        verticalLayout->addWidget(upPushButton);

        downPushButton = new QPushButton(ExportDirectoryDialog);
        downPushButton->setObjectName(QString::fromUtf8("downPushButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/next.png"), QSize(), QIcon::Normal, QIcon::Off);
        downPushButton->setIcon(icon1);

        verticalLayout->addWidget(downPushButton);

        removePushButton = new QPushButton(ExportDirectoryDialog);
        removePushButton->setObjectName(QString::fromUtf8("removePushButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/conf/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        removePushButton->setIcon(icon2);

        verticalLayout->addWidget(removePushButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout_2);

        groupBox = new QGroupBox(ExportDirectoryDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        seperateHtmlRadioButton = new QRadioButton(groupBox);
        seperateHtmlRadioButton->setObjectName(QString::fromUtf8("seperateHtmlRadioButton"));

        horizontalLayout_4->addWidget(seperateHtmlRadioButton);

        singleHtmlRadioButton = new QRadioButton(groupBox);
        singleHtmlRadioButton->setObjectName(QString::fromUtf8("singleHtmlRadioButton"));

        horizontalLayout_4->addWidget(singleHtmlRadioButton);

        seperatePDFRadioButton = new QRadioButton(groupBox);
        seperatePDFRadioButton->setObjectName(QString::fromUtf8("seperatePDFRadioButton"));

        horizontalLayout_4->addWidget(seperatePDFRadioButton);

        singlePDFRadioButton = new QRadioButton(groupBox);
        singlePDFRadioButton->setObjectName(QString::fromUtf8("singlePDFRadioButton"));

        horizontalLayout_4->addWidget(singlePDFRadioButton);


        verticalLayout_3->addLayout(horizontalLayout_4);

        seperateCssAndHtmlcheckBox = new QCheckBox(groupBox);
        seperateCssAndHtmlcheckBox->setObjectName(QString::fromUtf8("seperateCssAndHtmlcheckBox"));

        verticalLayout_3->addWidget(seperateCssAndHtmlcheckBox);

        keepDirCheckBox = new QCheckBox(groupBox);
        keepDirCheckBox->setObjectName(QString::fromUtf8("keepDirCheckBox"));

        verticalLayout_3->addWidget(keepDirCheckBox);

        exportPathWidget = new QWidget(groupBox);
        exportPathWidget->setObjectName(QString::fromUtf8("exportPathWidget"));
        horizontalLayout_5 = new QHBoxLayout(exportPathWidget);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_2 = new QLabel(exportPathWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_5->addWidget(label_2);

        exportLineEdit = new QLineEdit(exportPathWidget);
        exportLineEdit->setObjectName(QString::fromUtf8("exportLineEdit"));

        horizontalLayout_5->addWidget(exportLineEdit);

        exportPathBrowerPushButton = new QPushButton(exportPathWidget);
        exportPathBrowerPushButton->setObjectName(QString::fromUtf8("exportPathBrowerPushButton"));

        horizontalLayout_5->addWidget(exportPathBrowerPushButton);


        verticalLayout_3->addWidget(exportPathWidget);


        verticalLayout_2->addWidget(groupBox);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        exportPushButton = new QPushButton(ExportDirectoryDialog);
        exportPushButton->setObjectName(QString::fromUtf8("exportPushButton"));

        horizontalLayout_3->addWidget(exportPushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_3);


        retranslateUi(ExportDirectoryDialog);

        QMetaObject::connectSlotsByName(ExportDirectoryDialog);
    } // setupUi

    void retranslateUi(QDialog *ExportDirectoryDialog)
    {
        ExportDirectoryDialog->setWindowTitle(QApplication::translate("ExportDirectoryDialog", "Export Whole Directory...", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ExportDirectoryDialog", "Directory:", 0, QApplication::UnicodeUTF8));
        suddirCheckBox->setText(QApplication::translate("ExportDirectoryDialog", "include suddir", 0, QApplication::UnicodeUTF8));
        browerPushButton->setText(QApplication::translate("ExportDirectoryDialog", "Brower...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        upPushButton->setToolTip(QApplication::translate("ExportDirectoryDialog", "Move up", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        upPushButton->setText(QApplication::translate("ExportDirectoryDialog", "Up", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        downPushButton->setToolTip(QApplication::translate("ExportDirectoryDialog", "Move down", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        downPushButton->setText(QApplication::translate("ExportDirectoryDialog", "Down", 0, QApplication::UnicodeUTF8));
        removePushButton->setText(QApplication::translate("ExportDirectoryDialog", "Remove", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("ExportDirectoryDialog", "Export Option", 0, QApplication::UnicodeUTF8));
        seperateHtmlRadioButton->setText(QApplication::translate("ExportDirectoryDialog", "Seperate Html", 0, QApplication::UnicodeUTF8));
        singleHtmlRadioButton->setText(QApplication::translate("ExportDirectoryDialog", "Single Html", 0, QApplication::UnicodeUTF8));
        seperatePDFRadioButton->setText(QApplication::translate("ExportDirectoryDialog", "Seperate PDF", 0, QApplication::UnicodeUTF8));
        singlePDFRadioButton->setText(QApplication::translate("ExportDirectoryDialog", "Single PDF", 0, QApplication::UnicodeUTF8));
        seperateCssAndHtmlcheckBox->setText(QApplication::translate("ExportDirectoryDialog", "Seperate css and Html", 0, QApplication::UnicodeUTF8));
        keepDirCheckBox->setText(QApplication::translate("ExportDirectoryDialog", "Keep directory struct", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ExportDirectoryDialog", "Export Path:", 0, QApplication::UnicodeUTF8));
        exportPathBrowerPushButton->setText(QApplication::translate("ExportDirectoryDialog", "Brower...", 0, QApplication::UnicodeUTF8));
        exportPushButton->setText(QApplication::translate("ExportDirectoryDialog", "Export", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ExportDirectoryDialog: public Ui_ExportDirectoryDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPORTDIRECTORYDIALOG_H
