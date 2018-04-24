/********************************************************************************
** Form generated from reading UI file 'tocdockwidget.ui'
**
** Created: Thu Feb 22 11:06:56 2018
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOCDOCKWIDGET_H
#define UI_TOCDOCKWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDockWidget>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>
#include <QtWebKit/QWebView>

QT_BEGIN_NAMESPACE

class Ui_TOCDockWidget
{
public:
    QWidget *dockWidgetContents;
    QHBoxLayout *horizontalLayout;
    QWebView *webView;

    void setupUi(QDockWidget *TOCDockWidget)
    {
        if (TOCDockWidget->objectName().isEmpty())
            TOCDockWidget->setObjectName(QString::fromUtf8("TOCDockWidget"));
        TOCDockWidget->resize(400, 300);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        horizontalLayout = new QHBoxLayout(dockWidgetContents);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        webView = new QWebView(dockWidgetContents);
        webView->setObjectName(QString::fromUtf8("webView"));
        webView->setUrl(QUrl(QString::fromUtf8("about:blank")));

        horizontalLayout->addWidget(webView);

        TOCDockWidget->setWidget(dockWidgetContents);

        retranslateUi(TOCDockWidget);

        QMetaObject::connectSlotsByName(TOCDockWidget);
    } // setupUi

    void retranslateUi(QDockWidget *TOCDockWidget)
    {
        TOCDockWidget->setWindowTitle(QApplication::translate("TOCDockWidget", "Toc", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TOCDockWidget: public Ui_TOCDockWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOCDOCKWIDGET_H
