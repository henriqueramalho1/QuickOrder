/********************************************************************************
** Form generated from reading UI file 'productlistmenu.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUCTLISTMENU_H
#define UI_PRODUCTLISTMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProductListMenu
{
public:
    QFrame *frame;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QTreeWidget *productWidget;
    QPushButton *registerButton;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *orderWidget;
    QTextBrowser *textBrowser;
    QVBoxLayout *verticalLayout_3;
    QPushButton *addPushButton;
    QPushButton *backPushButton;

    void setupUi(QWidget *ProductListMenu)
    {
        if (ProductListMenu->objectName().isEmpty())
            ProductListMenu->setObjectName(QString::fromUtf8("ProductListMenu"));
        ProductListMenu->resize(1056, 505);
        ProductListMenu->setInputMethodHints(Qt::ImhNoTextHandles);
        frame = new QFrame(ProductListMenu);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(30, 20, 981, 441));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        widget = new QWidget(frame);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(80, 20, 811, 411));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        productWidget = new QTreeWidget(widget);
        productWidget->setObjectName(QString::fromUtf8("productWidget"));

        verticalLayout->addWidget(productWidget);

        registerButton = new QPushButton(widget);
        registerButton->setObjectName(QString::fromUtf8("registerButton"));

        verticalLayout->addWidget(registerButton);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        orderWidget = new QTableWidget(widget);
        if (orderWidget->columnCount() < 4)
            orderWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        orderWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        orderWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        orderWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        orderWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        if (orderWidget->rowCount() < 3)
            orderWidget->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        orderWidget->setVerticalHeaderItem(0, __qtablewidgetitem4);
        orderWidget->setObjectName(QString::fromUtf8("orderWidget"));
        orderWidget->setInputMethodHints(Qt::ImhNone);
        orderWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        orderWidget->setDragDropMode(QAbstractItemView::DragOnly);
        orderWidget->setAlternatingRowColors(true);
        orderWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        orderWidget->setShowGrid(true);
        orderWidget->setSortingEnabled(false);
        orderWidget->setCornerButtonEnabled(true);
        orderWidget->setRowCount(3);
        orderWidget->horizontalHeader()->setVisible(true);
        orderWidget->verticalHeader()->setVisible(false);
        orderWidget->verticalHeader()->setCascadingSectionResizes(false);

        verticalLayout_2->addWidget(orderWidget);

        textBrowser = new QTextBrowser(widget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        verticalLayout_2->addWidget(textBrowser);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(horizontalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        addPushButton = new QPushButton(widget);
        addPushButton->setObjectName(QString::fromUtf8("addPushButton"));

        verticalLayout_3->addWidget(addPushButton);

        backPushButton = new QPushButton(widget);
        backPushButton->setObjectName(QString::fromUtf8("backPushButton"));

        verticalLayout_3->addWidget(backPushButton);


        verticalLayout_4->addLayout(verticalLayout_3);


        retranslateUi(ProductListMenu);

        QMetaObject::connectSlotsByName(ProductListMenu);
    } // setupUi

    void retranslateUi(QWidget *ProductListMenu)
    {
        ProductListMenu->setWindowTitle(QCoreApplication::translate("ProductListMenu", "Sele\303\247\303\243o de pratos", nullptr));
#if QT_CONFIG(accessibility)
        ProductListMenu->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
        QTreeWidgetItem *___qtreewidgetitem = productWidget->headerItem();
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("ProductListMenu", "Pratos", nullptr));
        registerButton->setText(QCoreApplication::translate("ProductListMenu", "Registrar Pedido", nullptr));
        QTableWidgetItem *___qtablewidgetitem = orderWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("ProductListMenu", "Id", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = orderWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("ProductListMenu", "Quantidade", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = orderWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("ProductListMenu", "Pre\303\247o", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = orderWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("ProductListMenu", "Observa\303\247\303\243o", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = orderWidget->verticalHeaderItem(0);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("ProductListMenu", "Pizza", nullptr));
        textBrowser->setPlaceholderText(QCoreApplication::translate("ProductListMenu", "Adicione observa\303\247\303\243o  do pedido", nullptr));
        addPushButton->setText(QCoreApplication::translate("ProductListMenu", "Adicionar coment\303\241rio", nullptr));
        backPushButton->setText(QCoreApplication::translate("ProductListMenu", "Voltar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProductListMenu: public Ui_ProductListMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUCTLISTMENU_H
