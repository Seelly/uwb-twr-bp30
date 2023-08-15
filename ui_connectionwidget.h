/********************************************************************************
** Form generated from reading UI file 'connectionwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECTIONWIDGET_H
#define UI_CONNECTIONWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConnectionWidget
{
public:
    QGridLayout *gridLayout;
    QComboBox *comPort;
    QPushButton *connect_pb;
    QLabel *label;

    void setupUi(QWidget *ConnectionWidget)
    {
        if (ConnectionWidget->objectName().isEmpty())
            ConnectionWidget->setObjectName(QStringLiteral("ConnectionWidget"));
        ConnectionWidget->resize(225, 23);
        gridLayout = new QGridLayout(ConnectionWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setVerticalSpacing(0);
        gridLayout->setContentsMargins(-1, 0, -1, 0);
        comPort = new QComboBox(ConnectionWidget);
        comPort->setObjectName(QStringLiteral("comPort"));

        gridLayout->addWidget(comPort, 1, 1, 1, 1);

        connect_pb = new QPushButton(ConnectionWidget);
        connect_pb->setObjectName(QStringLiteral("connect_pb"));

        gridLayout->addWidget(connect_pb, 1, 2, 1, 1);

        label = new QLabel(ConnectionWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);


        retranslateUi(ConnectionWidget);

        QMetaObject::connectSlotsByName(ConnectionWidget);
    } // setupUi

    void retranslateUi(QWidget *ConnectionWidget)
    {
        ConnectionWidget->setWindowTitle(QApplication::translate("ConnectionWidget", "Form", 0));
        connect_pb->setText(QApplication::translate("ConnectionWidget", "Connect", 0));
        label->setText(QApplication::translate("ConnectionWidget", "COM", 0));
    } // retranslateUi

};

namespace Ui {
    class ConnectionWidget: public Ui_ConnectionWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECTIONWIDGET_H
