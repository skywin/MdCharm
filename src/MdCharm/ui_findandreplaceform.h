/********************************************************************************
** Form generated from reading UI file 'findandreplaceform.ui'
**
** Created: Thu Feb 22 11:06:55 2018
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDANDREPLACEFORM_H
#define UI_FINDANDREPLACEFORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FindAndReplaceForm
{
public:
    QGridLayout *gridLayout;
    QFrame *line;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *findTextLineEdit;
    QToolButton *prevFindToolButton;
    QToolButton *nextFindToolButton;
    QCheckBox *caseSensitiveCheckBox;
    QCheckBox *reCheckBox;
    QCheckBox *wholeWordCheckBox;
    QSpacerItem *horizontalSpacer;
    QToolButton *closeFindToolButton;
    QLineEdit *replaceLineEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *replacePushButton;
    QPushButton *replaceAllPushButton;
    QPushButton *excludePushButton;

    void setupUi(QWidget *FindAndReplaceForm)
    {
        if (FindAndReplaceForm->objectName().isEmpty())
            FindAndReplaceForm->setObjectName(QString::fromUtf8("FindAndReplaceForm"));
        FindAndReplaceForm->resize(734, 55);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(FindAndReplaceForm->sizePolicy().hasHeightForWidth());
        FindAndReplaceForm->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(FindAndReplaceForm);
        gridLayout->setContentsMargins(1, 1, 1, 1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(3);
        gridLayout->setVerticalSpacing(1);
        line = new QFrame(FindAndReplaceForm);
        line->setObjectName(QString::fromUtf8("line"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
        line->setSizePolicy(sizePolicy1);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 0, 0, 1, 10);

        label_2 = new QLabel(FindAndReplaceForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setMinimumSize(QSize(22, 22));
        label_2->setMaximumSize(QSize(22, 22));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/find.png")));
        label_2->setScaledContents(true);

        gridLayout->addWidget(label_2, 1, 0, 3, 1);

        label = new QLabel(FindAndReplaceForm);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 1, 3, 1);

        findTextLineEdit = new QLineEdit(FindAndReplaceForm);
        findTextLineEdit->setObjectName(QString::fromUtf8("findTextLineEdit"));

        gridLayout->addWidget(findTextLineEdit, 2, 2, 2, 1);

        prevFindToolButton = new QToolButton(FindAndReplaceForm);
        prevFindToolButton->setObjectName(QString::fromUtf8("prevFindToolButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/prev.png"), QSize(), QIcon::Normal, QIcon::Off);
        prevFindToolButton->setIcon(icon);
        prevFindToolButton->setCheckable(false);
        prevFindToolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(prevFindToolButton, 1, 3, 3, 1);

        nextFindToolButton = new QToolButton(FindAndReplaceForm);
        nextFindToolButton->setObjectName(QString::fromUtf8("nextFindToolButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/next.png"), QSize(), QIcon::Normal, QIcon::Off);
        nextFindToolButton->setIcon(icon1);
        nextFindToolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(nextFindToolButton, 1, 4, 3, 1);

        caseSensitiveCheckBox = new QCheckBox(FindAndReplaceForm);
        caseSensitiveCheckBox->setObjectName(QString::fromUtf8("caseSensitiveCheckBox"));

        gridLayout->addWidget(caseSensitiveCheckBox, 3, 5, 1, 1);

        reCheckBox = new QCheckBox(FindAndReplaceForm);
        reCheckBox->setObjectName(QString::fromUtf8("reCheckBox"));

        gridLayout->addWidget(reCheckBox, 3, 6, 1, 1);

        wholeWordCheckBox = new QCheckBox(FindAndReplaceForm);
        wholeWordCheckBox->setObjectName(QString::fromUtf8("wholeWordCheckBox"));

        gridLayout->addWidget(wholeWordCheckBox, 3, 7, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 8, 3, 1);

        closeFindToolButton = new QToolButton(FindAndReplaceForm);
        closeFindToolButton->setObjectName(QString::fromUtf8("closeFindToolButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/find_close.png"), QSize(), QIcon::Normal, QIcon::Off);
        closeFindToolButton->setIcon(icon2);
        closeFindToolButton->setAutoRaise(true);

        gridLayout->addWidget(closeFindToolButton, 1, 9, 3, 1);

        replaceLineEdit = new QLineEdit(FindAndReplaceForm);
        replaceLineEdit->setObjectName(QString::fromUtf8("replaceLineEdit"));

        gridLayout->addWidget(replaceLineEdit, 4, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        replacePushButton = new QPushButton(FindAndReplaceForm);
        replacePushButton->setObjectName(QString::fromUtf8("replacePushButton"));

        horizontalLayout->addWidget(replacePushButton);

        replaceAllPushButton = new QPushButton(FindAndReplaceForm);
        replaceAllPushButton->setObjectName(QString::fromUtf8("replaceAllPushButton"));

        horizontalLayout->addWidget(replaceAllPushButton);

        excludePushButton = new QPushButton(FindAndReplaceForm);
        excludePushButton->setObjectName(QString::fromUtf8("excludePushButton"));

        horizontalLayout->addWidget(excludePushButton);


        gridLayout->addLayout(horizontalLayout, 4, 3, 1, 3);


        retranslateUi(FindAndReplaceForm);

        QMetaObject::connectSlotsByName(FindAndReplaceForm);
    } // setupUi

    void retranslateUi(QWidget *FindAndReplaceForm)
    {
        FindAndReplaceForm->setWindowTitle(QApplication::translate("FindAndReplaceForm", "FindAndReplace", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        label->setText(QApplication::translate("FindAndReplaceForm", "Find:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        prevFindToolButton->setToolTip(QApplication::translate("FindAndReplaceForm", "Previous", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        prevFindToolButton->setText(QApplication::translate("FindAndReplaceForm", "Previous", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        nextFindToolButton->setToolTip(QApplication::translate("FindAndReplaceForm", "Next", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        nextFindToolButton->setText(QApplication::translate("FindAndReplaceForm", "Next", 0, QApplication::UnicodeUTF8));
        caseSensitiveCheckBox->setText(QApplication::translate("FindAndReplaceForm", "Case Sensitive", 0, QApplication::UnicodeUTF8));
        reCheckBox->setText(QApplication::translate("FindAndReplaceForm", "Regular Expression", 0, QApplication::UnicodeUTF8));
        wholeWordCheckBox->setText(QApplication::translate("FindAndReplaceForm", "Whole Words", 0, QApplication::UnicodeUTF8));
        closeFindToolButton->setText(QApplication::translate("FindAndReplaceForm", "close", 0, QApplication::UnicodeUTF8));
        replacePushButton->setText(QApplication::translate("FindAndReplaceForm", "Replace", 0, QApplication::UnicodeUTF8));
        replaceAllPushButton->setText(QApplication::translate("FindAndReplaceForm", "Replace All", 0, QApplication::UnicodeUTF8));
        excludePushButton->setText(QApplication::translate("FindAndReplaceForm", "Exclude", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FindAndReplaceForm: public Ui_FindAndReplaceForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDANDREPLACEFORM_H
