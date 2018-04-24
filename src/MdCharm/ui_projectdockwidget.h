/********************************************************************************
** Form generated from reading UI file 'projectdockwidget.ui'
**
** Created: Thu Feb 22 11:06:55 2018
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECTDOCKWIDGET_H
#define UI_PROJECTDOCKWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDockWidget>
#include <QtGui/QHeaderView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProjectDockWidget
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;

    void setupUi(QDockWidget *ProjectDockWidget)
    {
        if (ProjectDockWidget->objectName().isEmpty())
            ProjectDockWidget->setObjectName(QString::fromUtf8("ProjectDockWidget"));
        ProjectDockWidget->resize(176, 513);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        ProjectDockWidget->setWidget(dockWidgetContents);

        retranslateUi(ProjectDockWidget);

        QMetaObject::connectSlotsByName(ProjectDockWidget);
    } // setupUi

    void retranslateUi(QDockWidget *ProjectDockWidget)
    {
        ProjectDockWidget->setWindowTitle(QApplication::translate("ProjectDockWidget", "Project", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ProjectDockWidget: public Ui_ProjectDockWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECTDOCKWIDGET_H
