/********************************************************************************
** Form generated from reading UI file 'GraphicsWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPHICSWIDGET_H
#define UI_GRAPHICSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>
#include "GraphicsView.h"

QT_BEGIN_NAMESPACE

class Ui_GraphicsWidget
{
public:
    QGridLayout *gridLayout;
    QTableWidget *anchorTable;
    GraphicsView *graphicsView;
    QTableWidget *tagTable;

    void setupUi(QWidget *GraphicsWidget)
    {
        if (GraphicsWidget->objectName().isEmpty())
            GraphicsWidget->setObjectName(QStringLiteral("GraphicsWidget"));
        GraphicsWidget->resize(1074, 300);
        gridLayout = new QGridLayout(GraphicsWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        anchorTable = new QTableWidget(GraphicsWidget);
        if (anchorTable->columnCount() < 12)
            anchorTable->setColumnCount(12);
        if (anchorTable->rowCount() < 4)
            anchorTable->setRowCount(4);
        anchorTable->setObjectName(QStringLiteral("anchorTable"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(anchorTable->sizePolicy().hasHeightForWidth());
        anchorTable->setSizePolicy(sizePolicy);
        anchorTable->setMinimumSize(QSize(0, 112));
        anchorTable->setMaximumSize(QSize(350, 16777215));
        QFont font;
        font.setPointSize(8);
        anchorTable->setFont(font);
        anchorTable->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        anchorTable->setAlternatingRowColors(true);
        anchorTable->setRowCount(4);
        anchorTable->setColumnCount(12);
        anchorTable->horizontalHeader()->setDefaultSectionSize(70);
        anchorTable->horizontalHeader()->setMinimumSectionSize(70);
        anchorTable->horizontalHeader()->setStretchLastSection(false);
        anchorTable->verticalHeader()->setVisible(false);
        anchorTable->verticalHeader()->setDefaultSectionSize(18);
        anchorTable->verticalHeader()->setHighlightSections(true);
        anchorTable->verticalHeader()->setMinimumSectionSize(18);

        gridLayout->addWidget(anchorTable, 0, 0, 1, 1);

        graphicsView = new GraphicsView(GraphicsWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));

        gridLayout->addWidget(graphicsView, 1, 0, 1, 2);

        tagTable = new QTableWidget(GraphicsWidget);
        if (tagTable->columnCount() < 10)
            tagTable->setColumnCount(10);
        tagTable->setObjectName(QStringLiteral("tagTable"));
        sizePolicy.setHeightForWidth(tagTable->sizePolicy().hasHeightForWidth());
        tagTable->setSizePolicy(sizePolicy);
        tagTable->setMinimumSize(QSize(0, 71));
        tagTable->setMaximumSize(QSize(700, 16777215));
        tagTable->setFont(font);
        tagTable->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tagTable->setAlternatingRowColors(true);
        tagTable->setRowCount(0);
        tagTable->setColumnCount(10);
        tagTable->horizontalHeader()->setDefaultSectionSize(70);
        tagTable->horizontalHeader()->setMinimumSectionSize(70);
        tagTable->horizontalHeader()->setStretchLastSection(false);
        tagTable->verticalHeader()->setDefaultSectionSize(18);
        tagTable->verticalHeader()->setMinimumSectionSize(18);

        gridLayout->addWidget(tagTable, 0, 1, 1, 1);


        retranslateUi(GraphicsWidget);

        QMetaObject::connectSlotsByName(GraphicsWidget);
    } // setupUi

    void retranslateUi(QWidget *GraphicsWidget)
    {
        GraphicsWidget->setWindowTitle(QApplication::translate("GraphicsWidget", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class GraphicsWidget: public Ui_GraphicsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPHICSWIDGET_H
