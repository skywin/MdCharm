/********************************************************************************
** Form generated from reading UI file 'texteditorpage.ui'
**
** Created: Thu Feb 22 11:06:55 2018
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTEDITORPAGE_H
#define UI_TEXTEDITORPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFontComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TextEditorPage
{
public:
    QWidget *fontAndColor;
    QVBoxLayout *verticalLayout;
    QGroupBox *font;
    QHBoxLayout *horizontalLayout;
    QLabel *familyLabel;
    QFontComboBox *fontComboBox;
    QSpacerItem *horizontalSpacer;
    QLabel *sizeLabel;
    QComboBox *fontSizeComboBox;
    QSpacerItem *verticalSpacer_3;
    QWidget *behavior;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *tabGroupBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *tabSizeLabel;
    QSpinBox *tabSizeSpinBox;
    QCheckBox *useSpaceInsteadCheckBox;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *defaultEncodingComboBox;
    QLabel *label_2;
    QComboBox *utf8BOMComboBox;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_2;
    QCheckBox *spellCheckCheckBox;
    QLabel *label_3;
    QComboBox *spellCheckComboBox;
    QSpacerItem *horizontalSpacer_4;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_3;
    QCheckBox *autoIndentationCheckBox;
    QCheckBox *autoPairCheckBox;
    QSpacerItem *verticalSpacer;
    QWidget *display;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *enableTWCheckBox;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *rightMarginCheckBox;
    QSpinBox *rightMarginSpinBox;
    QSpacerItem *horizontalSpacer_5;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *displayLineNumberCheckBox;
    QCheckBox *highlightCLCheckBox;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QTabWidget *TextEditorPage)
    {
        if (TextEditorPage->objectName().isEmpty())
            TextEditorPage->setObjectName(QString::fromUtf8("TextEditorPage"));
        TextEditorPage->resize(400, 342);
        fontAndColor = new QWidget();
        fontAndColor->setObjectName(QString::fromUtf8("fontAndColor"));
        verticalLayout = new QVBoxLayout(fontAndColor);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        font = new QGroupBox(fontAndColor);
        font->setObjectName(QString::fromUtf8("font"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(font->sizePolicy().hasHeightForWidth());
        font->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(font);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        familyLabel = new QLabel(font);
        familyLabel->setObjectName(QString::fromUtf8("familyLabel"));

        horizontalLayout->addWidget(familyLabel);

        fontComboBox = new QFontComboBox(font);
        fontComboBox->setObjectName(QString::fromUtf8("fontComboBox"));

        horizontalLayout->addWidget(fontComboBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        sizeLabel = new QLabel(font);
        sizeLabel->setObjectName(QString::fromUtf8("sizeLabel"));

        horizontalLayout->addWidget(sizeLabel);

        fontSizeComboBox = new QComboBox(font);
        fontSizeComboBox->insertItems(0, QStringList()
         << QString::fromUtf8("6")
         << QString::fromUtf8("7")
         << QString::fromUtf8("8")
         << QString::fromUtf8("9")
         << QString::fromUtf8("10")
         << QString::fromUtf8("11")
         << QString::fromUtf8("12")
         << QString::fromUtf8("14")
         << QString::fromUtf8("16")
         << QString::fromUtf8("18")
         << QString::fromUtf8("20")
         << QString::fromUtf8("22")
         << QString::fromUtf8("24")
         << QString::fromUtf8("26")
         << QString::fromUtf8("28")
         << QString::fromUtf8("36")
         << QString::fromUtf8("48")
         << QString::fromUtf8("72")
        );
        fontSizeComboBox->setObjectName(QString::fromUtf8("fontSizeComboBox"));

        horizontalLayout->addWidget(fontSizeComboBox);


        verticalLayout->addWidget(font);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        TextEditorPage->addTab(fontAndColor, QString());
        behavior = new QWidget();
        behavior->setObjectName(QString::fromUtf8("behavior"));
        verticalLayout_2 = new QVBoxLayout(behavior);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tabGroupBox = new QGroupBox(behavior);
        tabGroupBox->setObjectName(QString::fromUtf8("tabGroupBox"));
        horizontalLayout_2 = new QHBoxLayout(tabGroupBox);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        tabSizeLabel = new QLabel(tabGroupBox);
        tabSizeLabel->setObjectName(QString::fromUtf8("tabSizeLabel"));

        horizontalLayout_2->addWidget(tabSizeLabel);

        tabSizeSpinBox = new QSpinBox(tabGroupBox);
        tabSizeSpinBox->setObjectName(QString::fromUtf8("tabSizeSpinBox"));
        tabSizeSpinBox->setMinimum(1);
        tabSizeSpinBox->setMaximum(20);

        horizontalLayout_2->addWidget(tabSizeSpinBox);

        useSpaceInsteadCheckBox = new QCheckBox(tabGroupBox);
        useSpaceInsteadCheckBox->setObjectName(QString::fromUtf8("useSpaceInsteadCheckBox"));

        horizontalLayout_2->addWidget(useSpaceInsteadCheckBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_2->addWidget(tabGroupBox);

        groupBox_3 = new QGroupBox(behavior);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout = new QGridLayout(groupBox_3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox_3);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        defaultEncodingComboBox = new QComboBox(groupBox_3);
        defaultEncodingComboBox->setObjectName(QString::fromUtf8("defaultEncodingComboBox"));

        gridLayout->addWidget(defaultEncodingComboBox, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        utf8BOMComboBox = new QComboBox(groupBox_3);
        utf8BOMComboBox->setObjectName(QString::fromUtf8("utf8BOMComboBox"));

        gridLayout->addWidget(utf8BOMComboBox, 1, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 2, 1, 1);


        verticalLayout_2->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(behavior);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_2 = new QGridLayout(groupBox_4);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        spellCheckCheckBox = new QCheckBox(groupBox_4);
        spellCheckCheckBox->setObjectName(QString::fromUtf8("spellCheckCheckBox"));

        gridLayout_2->addWidget(spellCheckCheckBox, 0, 0, 1, 2);

        label_3 = new QLabel(groupBox_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        spellCheckComboBox = new QComboBox(groupBox_4);
        spellCheckComboBox->setObjectName(QString::fromUtf8("spellCheckComboBox"));

        gridLayout_2->addWidget(spellCheckComboBox, 1, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 1, 2, 1, 1);


        verticalLayout_2->addWidget(groupBox_4);

        groupBox_5 = new QGroupBox(behavior);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        gridLayout_3 = new QGridLayout(groupBox_5);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        autoIndentationCheckBox = new QCheckBox(groupBox_5);
        autoIndentationCheckBox->setObjectName(QString::fromUtf8("autoIndentationCheckBox"));

        gridLayout_3->addWidget(autoIndentationCheckBox, 0, 0, 1, 1);

        autoPairCheckBox = new QCheckBox(groupBox_5);
        autoPairCheckBox->setObjectName(QString::fromUtf8("autoPairCheckBox"));

        gridLayout_3->addWidget(autoPairCheckBox, 1, 0, 1, 1);


        verticalLayout_2->addWidget(groupBox_5);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        TextEditorPage->addTab(behavior, QString());
        display = new QWidget();
        display->setObjectName(QString::fromUtf8("display"));
        verticalLayout_3 = new QVBoxLayout(display);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox = new QGroupBox(display);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_4 = new QVBoxLayout(groupBox);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        enableTWCheckBox = new QCheckBox(groupBox);
        enableTWCheckBox->setObjectName(QString::fromUtf8("enableTWCheckBox"));

        verticalLayout_4->addWidget(enableTWCheckBox);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        rightMarginCheckBox = new QCheckBox(groupBox);
        rightMarginCheckBox->setObjectName(QString::fromUtf8("rightMarginCheckBox"));

        horizontalLayout_3->addWidget(rightMarginCheckBox);

        rightMarginSpinBox = new QSpinBox(groupBox);
        rightMarginSpinBox->setObjectName(QString::fromUtf8("rightMarginSpinBox"));

        horizontalLayout_3->addWidget(rightMarginSpinBox);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);


        verticalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout_3->addWidget(groupBox);

        groupBox_2 = new QGroupBox(display);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_5 = new QVBoxLayout(groupBox_2);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        displayLineNumberCheckBox = new QCheckBox(groupBox_2);
        displayLineNumberCheckBox->setObjectName(QString::fromUtf8("displayLineNumberCheckBox"));

        verticalLayout_5->addWidget(displayLineNumberCheckBox);

        highlightCLCheckBox = new QCheckBox(groupBox_2);
        highlightCLCheckBox->setObjectName(QString::fromUtf8("highlightCLCheckBox"));

        verticalLayout_5->addWidget(highlightCLCheckBox);


        verticalLayout_3->addWidget(groupBox_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        TextEditorPage->addTab(display, QString());
#ifndef QT_NO_SHORTCUT
        familyLabel->setBuddy(fontComboBox);
        sizeLabel->setBuddy(fontSizeComboBox);
        tabSizeLabel->setBuddy(tabSizeSpinBox);
        label->setBuddy(defaultEncodingComboBox);
        label_2->setBuddy(utf8BOMComboBox);
#endif // QT_NO_SHORTCUT

        retranslateUi(TextEditorPage);

        TextEditorPage->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TextEditorPage);
    } // setupUi

    void retranslateUi(QTabWidget *TextEditorPage)
    {
        TextEditorPage->setWindowTitle(QApplication::translate("TextEditorPage", "TabWidget", 0, QApplication::UnicodeUTF8));
        font->setTitle(QApplication::translate("TextEditorPage", "Font", 0, QApplication::UnicodeUTF8));
        familyLabel->setText(QApplication::translate("TextEditorPage", "Family", 0, QApplication::UnicodeUTF8));
        sizeLabel->setText(QApplication::translate("TextEditorPage", "Size:", 0, QApplication::UnicodeUTF8));
        TextEditorPage->setTabText(TextEditorPage->indexOf(fontAndColor), QApplication::translate("TextEditorPage", "Font && Color", 0, QApplication::UnicodeUTF8));
        tabGroupBox->setTitle(QApplication::translate("TextEditorPage", "Tab", 0, QApplication::UnicodeUTF8));
        tabSizeLabel->setText(QApplication::translate("TextEditorPage", "Tab Size:", 0, QApplication::UnicodeUTF8));
        useSpaceInsteadCheckBox->setText(QApplication::translate("TextEditorPage", "User white space instead of tab", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("TextEditorPage", "File Encodings", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("TextEditorPage", "Default encoding:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("TextEditorPage", "UTF-8 BOM:", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("TextEditorPage", "Spell Check", 0, QApplication::UnicodeUTF8));
        spellCheckCheckBox->setText(QApplication::translate("TextEditorPage", "Enable spellcheck", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("TextEditorPage", "Language:", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("TextEditorPage", "Typing", 0, QApplication::UnicodeUTF8));
        autoIndentationCheckBox->setText(QApplication::translate("TextEditorPage", "Enable Automatic indentation", 0, QApplication::UnicodeUTF8));
        autoPairCheckBox->setText(QApplication::translate("TextEditorPage", "Auto pair", 0, QApplication::UnicodeUTF8));
        TextEditorPage->setTabText(TextEditorPage->indexOf(behavior), QApplication::translate("TextEditorPage", "Behavior", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("TextEditorPage", "Text Warpping", 0, QApplication::UnicodeUTF8));
        enableTWCheckBox->setText(QApplication::translate("TextEditorPage", "Enable Text Wrapping", 0, QApplication::UnicodeUTF8));
        rightMarginCheckBox->setText(QApplication::translate("TextEditorPage", "Right margin at column:", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("TextEditorPage", "Display", 0, QApplication::UnicodeUTF8));
        displayLineNumberCheckBox->setText(QApplication::translate("TextEditorPage", "Display line number", 0, QApplication::UnicodeUTF8));
        highlightCLCheckBox->setText(QApplication::translate("TextEditorPage", "Highlight current line", 0, QApplication::UnicodeUTF8));
        TextEditorPage->setTabText(TextEditorPage->indexOf(display), QApplication::translate("TextEditorPage", "Display", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TextEditorPage: public Ui_TextEditorPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTEDITORPAGE_H
