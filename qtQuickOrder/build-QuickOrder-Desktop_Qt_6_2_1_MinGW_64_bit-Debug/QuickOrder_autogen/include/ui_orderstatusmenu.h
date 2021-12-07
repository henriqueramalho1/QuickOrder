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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OrderStatusMenu
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QTableWidget *orderWidget;
    QPushButton *backButton;
    QPushButton *updateStatusButton;
    QPushButton *cancelOrderButton;

    void setupUi(QWidget *OrderStatusMenu)
    {
        if (OrderStatusMenu->objectName().isEmpty())
            OrderStatusMenu->setObjectName(QString::fromUtf8("OrderStatusMenu"));
        OrderStatusMenu->resize(624, 346);
        layoutWidget = new QWidget(OrderStatusMenu);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 601, 321));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        orderWidget = new QTableWidget(layoutWidget);
        if (orderWidget->columnCount() < 6)
            orderWidget->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        orderWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        orderWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        orderWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        orderWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        orderWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        orderWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        orderWidget->setObjectName(QString::fromUtf8("orderWidget"));
        orderWidget->setInputMethodHints(Qt::ImhNone);
        orderWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        orderWidget->setDragDropMode(QAbstractItemView::DragOnly);
        orderWidget->setAlternatingRowColors(true);
        orderWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        orderWidget->setShowGrid(true);
        orderWidget->setSortingEnabled(false);
        orderWidget->setCornerButtonEnabled(true);
        orderWidget->setRowCount(0);
        orderWidget->horizontalHeader()->setVisible(true);
        orderWidget->verticalHeader()->setVisible(false);
        orderWidget->verticalHeader()->setCascadingSectionResizes(false);

        gridLayout->addWidget(orderWidget, 0, 0, 1, 3);

        backButton = new QPushButton(layoutWidget);
        backButton->setObjectName(QString::fromUtf8("backButton"));

        gridLayout->addWidget(backButton, 1, 0, 1, 1);

        updateStatusButton = new QPushButton(layoutWidget);
        updateStatusButton->setObjectName(QString::fromUtf8("updateStatusButton"));

        gridLayout->addWidget(updateStatusButton, 1, 1, 1, 1);

        cancelOrderButton = new QPushButton(layoutWidget);
        cancelOrderButton->setObjectName(QString::fromUtf8("cancelOrderButton"));

        gridLayout->addWidget(cancelOrderButton, 1, 2, 1, 1);


        retranslateUi(OrderStatusMenu);

        QMetaObject::connectSlotsByName(OrderStatusMenu);
    } // setupUi

    void retranslateUi(QWidget *OrderStatusMenu)
    {
        OrderStatusMenu->setWindowTitle(QCoreApplication::translate("OrderStatusMenu", "QuickOrder", nullptr));
        QTableWidgetItem *___qtablewidgetitem = orderWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("OrderStatusMenu", "Id", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = orderWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("OrderStatusMenu", "Prato", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = orderWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("OrderStatusMenu", "Quantidade", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = orderWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("OrderStatusMenu", "Pre\303\247o", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = orderWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("OrderStatusMenu", "Observa\303\247\303\243o", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = orderWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("OrderStatusMenu", "Status", nullptr));
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
