/********************************************************************************
** Form generated from reading UI file 'cite_blackboard.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CITE_BLACKBOARD_H
#define UI_CITE_BLACKBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cite_blackboardClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *cite_blackboardClass)
    {
        if (cite_blackboardClass->objectName().isEmpty())
            cite_blackboardClass->setObjectName(QStringLiteral("cite_blackboardClass"));
        cite_blackboardClass->resize(600, 400);
        menuBar = new QMenuBar(cite_blackboardClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        cite_blackboardClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(cite_blackboardClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        cite_blackboardClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(cite_blackboardClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        cite_blackboardClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(cite_blackboardClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        cite_blackboardClass->setStatusBar(statusBar);

        retranslateUi(cite_blackboardClass);

        QMetaObject::connectSlotsByName(cite_blackboardClass);
    } // setupUi

    void retranslateUi(QMainWindow *cite_blackboardClass)
    {
        cite_blackboardClass->setWindowTitle(QApplication::translate("cite_blackboardClass", "cite_blackboard", 0));
    } // retranslateUi

};

namespace Ui {
    class cite_blackboardClass: public Ui_cite_blackboardClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CITE_BLACKBOARD_H
