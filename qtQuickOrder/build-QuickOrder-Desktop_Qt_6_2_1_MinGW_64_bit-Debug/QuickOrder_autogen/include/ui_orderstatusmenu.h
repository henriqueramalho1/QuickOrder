/********************************************************************************
** Form generated from reading UI file 'orderstatusmenu.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDERSTATUSMENU_H
#define UI_ORDERSTATUSMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OrderStatusMenu
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *backButton;
    QPushButton *updateStatusButton;
    QPushButton *cancelOrderButton;
    QListWidget *orderListWidget;

    void setupUi(QWidget *OrderStatusMenu)
    {
        if (OrderStatusMenu->objectName().isEmpty())
            OrderStatusMenu->setObjectName(QString::fromUtf8("OrderStatusMenu"));
        OrderStatusMenu->resize(400, 300);
        widget = new QWidget(OrderStatusMenu);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 381, 281));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        backButton = new QPushButton(widget);
        backButton->setObjectName(QString::fromUtf8("backButton"));

        gridLayout->addWidget(backButton, 1, 0, 1, 1);

        updateStatusButton = new QPushButton(widget);
        updateStatusButton->setObjectName(QString::fromUtf8("updateStatusButton"));

        gridLayout->addWidget(updateStatusButton, 1, 1, 1, 1);

        cancelOrderButton = new QPushButton(widget);
        cancelOrderButton->setObjectName(QString::fromUtf8("cancelOrderButton"));

        gridLayout->addWidget(cancelOrderButton, 1, 2, 1, 1);

        orderListWidget = new QListWidget(widget);
        orderListWidget->setObjectName(QString::fromUtf8("orderListWidget"));

        gridLayout->addWidget(orderListWidget, 0, 0, 1, 3);


        retranslateUi(OrderStatusMenu);

        QMetaObject::connectSlotsByName(OrderStatusMenu);
    } // setupUi

    void retranslateUi(QWidget *OrderStatusMenu)
    {
        OrderStatusMenu->setWindowTitle(QCoreApplication::translate("OrderStatusMenu", "Form", nullptr));
        backButton->setText(QCoreApplication::translate("OrderStatusMenu", "Voltar", nullptr));
        updateStatusButton->setText(QCoreApplication::translate("OrderStatusMenu", "Atualizar Status", nullptr));
        cancelOrderButton->setText(QCoreApplication::translate("OrderStatusMenu", "Cancelar Pedido", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OrderStatusMenu: public Ui_OrderStatusMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDERSTATUSMENU_H
