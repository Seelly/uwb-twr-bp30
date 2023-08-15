/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include "GraphicsWidget.h"
#include "MinimapView.h"
#include "ViewSettingsWidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbout;
    QAction *actionConfig;
    GraphicsWidget *graphicsWidget;
    QMenuBar *menuBar;
    QMenu *viewMenu;
    QMenu *helpMenu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QDockWidget *viewSettings_dw;
    ViewSettingsWidget *viewSettings_w;
    QDockWidget *minimap_dw;
    MinimapView *minimap;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        QIcon icon;
        icon.addFile(QStringLiteral("../../../Pictures/11.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionConfig = new QAction(MainWindow);
        actionConfig->setObjectName(QStringLiteral("actionConfig"));
        graphicsWidget = new GraphicsWidget(MainWindow);
        graphicsWidget->setObjectName(QStringLiteral("graphicsWidget"));
        MainWindow->setCentralWidget(graphicsWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 23));
        viewMenu = new QMenu(menuBar);
        viewMenu->setObjectName(QStringLiteral("viewMenu"));
        helpMenu = new QMenu(menuBar);
        helpMenu->setObjectName(QStringLiteral("helpMenu"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setMovable(false);
        mainToolBar->setFloatable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        viewSettings_dw = new QDockWidget(MainWindow);
        viewSettings_dw->setObjectName(QStringLiteral("viewSettings_dw"));
        viewSettings_w = new ViewSettingsWidget();
        viewSettings_w->setObjectName(QStringLiteral("viewSettings_w"));
        viewSettings_dw->setWidget(viewSettings_w);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), viewSettings_dw);
        minimap_dw = new QDockWidget(MainWindow);
        minimap_dw->setObjectName(QStringLiteral("minimap_dw"));
        minimap = new MinimapView();
        minimap->setObjectName(QStringLiteral("minimap"));
        minimap_dw->setWidget(minimap);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), minimap_dw);

        menuBar->addAction(viewMenu->menuAction());
        menuBar->addAction(helpMenu->menuAction());
        helpMenu->addAction(actionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "BPHero UWB Location", 0));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0));
        actionConfig->setText(QApplication::translate("MainWindow", "Channel Config", 0));
        viewMenu->setTitle(QApplication::translate("MainWindow", "&View", 0));
        helpMenu->setTitle(QApplication::translate("MainWindow", "Help", 0));
        viewSettings_dw->setWindowTitle(QApplication::translate("MainWindow", "Settings", 0));
        minimap_dw->setWindowTitle(QApplication::translate("MainWindow", "Minimap", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
