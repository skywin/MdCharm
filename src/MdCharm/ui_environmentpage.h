/********************************************************************************
** Form generated from reading UI file 'environmentpage.ui'
**
** Created: Thu Feb 22 11:06:55 2018
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENVIRONMENTPAGE_H
#define UI_ENVIRONMENTPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QTableView>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EnvPage
{
public:
    QWidget *general;
    QVBoxLayout *verticalLayout;
    QGroupBox *system;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QCheckBox *showSplashCheckBox;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkUpdatesCheckBox;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QComboBox *markdownEngineComboBox;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;
    QWidget *extension;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QListWidget *fileTypeListWidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QListWidget *extensionListWidget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLineEdit *newExtensionLineEdit;
    QToolButton *addToolButton;
    QToolButton *deleteToolButton;
    QWidget *tab;
    QVBoxLayout *keyboardVerticalLayout;
    QTableView *shortcutTableView;

    void setupUi(QTabWidget *EnvPage)
    {
        if (EnvPage->objectName().isEmpty())
            EnvPage->setObjectName(QString::fromUtf8("EnvPage"));
        EnvPage->resize(400, 300);
        general = new QWidget();
        general->setObjectName(QString::fromUtf8("general"));
        verticalLayout = new QVBoxLayout(general);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        system = new QGroupBox(general);
        system->setObjectName(QString::fromUtf8("system"));
        verticalLayout_2 = new QVBoxLayout(system);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        showSplashCheckBox = new QCheckBox(system);
        showSplashCheckBox->setObjectName(QString::fromUtf8("showSplashCheckBox"));

        horizontalLayout->addWidget(showSplashCheckBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        checkUpdatesCheckBox = new QCheckBox(system);
        checkUpdatesCheckBox->setObjectName(QString::fromUtf8("checkUpdatesCheckBox"));

        horizontalLayout_2->addWidget(checkUpdatesCheckBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout->addWidget(system);

        groupBox = new QGroupBox(general);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_5 = new QVBoxLayout(groupBox);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        markdownEngineComboBox = new QComboBox(groupBox);
        markdownEngineComboBox->setObjectName(QString::fromUtf8("markdownEngineComboBox"));

        horizontalLayout_3->addWidget(markdownEngineComboBox);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout_5->addLayout(horizontalLayout_3);


        verticalLayout->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        EnvPage->addTab(general, QString());
        extension = new QWidget();
        extension->setObjectName(QString::fromUtf8("extension"));
        horizontalLayout_5 = new QHBoxLayout(extension);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_2 = new QLabel(extension);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_4->addWidget(label_2);

        fileTypeListWidget = new QListWidget(extension);
        fileTypeListWidget->setObjectName(QString::fromUtf8("fileTypeListWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fileTypeListWidget->sizePolicy().hasHeightForWidth());
        fileTypeListWidget->setSizePolicy(sizePolicy);
        fileTypeListWidget->setMinimumSize(QSize(100, 0));
        fileTypeListWidget->setMaximumSize(QSize(100, 16777215));

        verticalLayout_4->addWidget(fileTypeListWidget);


        horizontalLayout_5->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_3 = new QLabel(extension);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_3->addWidget(label_3);

        extensionListWidget = new QListWidget(extension);
        extensionListWidget->setObjectName(QString::fromUtf8("extensionListWidget"));

        verticalLayout_3->addWidget(extensionListWidget);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label = new QLabel(extension);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_4->addWidget(label);

        newExtensionLineEdit = new QLineEdit(extension);
        newExtensionLineEdit->setObjectName(QString::fromUtf8("newExtensionLineEdit"));

        horizontalLayout_4->addWidget(newExtensionLineEdit);

        addToolButton = new QToolButton(extension);
        addToolButton->setObjectName(QString::fromUtf8("addToolButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/conf/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        addToolButton->setIcon(icon);

        horizontalLayout_4->addWidget(addToolButton);

        deleteToolButton = new QToolButton(extension);
        deleteToolButton->setObjectName(QString::fromUtf8("deleteToolButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/conf/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        deleteToolButton->setIcon(icon1);

        horizontalLayout_4->addWidget(deleteToolButton);


        verticalLayout_3->addLayout(horizontalLayout_4);


        horizontalLayout_5->addLayout(verticalLayout_3);

        EnvPage->addTab(extension, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        keyboardVerticalLayout = new QVBoxLayout(tab);
        keyboardVerticalLayout->setObjectName(QString::fromUtf8("keyboardVerticalLayout"));
        shortcutTableView = new QTableView(tab);
        shortcutTableView->setObjectName(QString::fromUtf8("shortcutTableView"));
        shortcutTableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        shortcutTableView->setSelectionBehavior(QAbstractItemView::SelectRows);

        keyboardVerticalLayout->addWidget(shortcutTableView);

        EnvPage->addTab(tab, QString());

        retranslateUi(EnvPage);

        EnvPage->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(EnvPage);
    } // setupUi

    void retranslateUi(QTabWidget *EnvPage)
    {
        EnvPage->setWindowTitle(QApplication::translate("EnvPage", "EnvConfig", 0, QApplication::UnicodeUTF8));
        system->setTitle(QApplication::translate("EnvPage", "System", 0, QApplication::UnicodeUTF8));
        showSplashCheckBox->setText(QApplication::translate("EnvPage", "Show Splash", 0, QApplication::UnicodeUTF8));
        checkUpdatesCheckBox->setText(QApplication::translate("EnvPage", "Check for updates on startup", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("EnvPage", "Markdown Engine", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("EnvPage", "Markdown Engine", 0, QApplication::UnicodeUTF8));
        EnvPage->setTabText(EnvPage->indexOf(general), QApplication::translate("EnvPage", "General", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("EnvPage", "FileType:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("EnvPage", "Extension:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("EnvPage", "Add New:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        addToolButton->setToolTip(QApplication::translate("EnvPage", "Add", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        addToolButton->setText(QApplication::translate("EnvPage", "Add", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        deleteToolButton->setToolTip(QApplication::translate("EnvPage", "Delete", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        deleteToolButton->setText(QApplication::translate("EnvPage", "Delete", 0, QApplication::UnicodeUTF8));
        EnvPage->setTabText(EnvPage->indexOf(extension), QApplication::translate("EnvPage", "File Extension", 0, QApplication::UnicodeUTF8));
        EnvPage->setTabText(EnvPage->indexOf(tab), QApplication::translate("EnvPage", "Keyboard", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class EnvPage: public Ui_EnvPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENVIRONMENTPAGE_H
