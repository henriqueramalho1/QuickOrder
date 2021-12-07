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
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_4;
    QTreeWidget *productWidget;
    QPushButton *registerButton;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QTableWidget *orderWidget;
    QTextBrowser *noteInput;
    QVBoxLayout *verticalLayout_3;
    QPushButton *addPushButton;
    QPushButton *pushButton;
    QPushButton *backPushButton;

    void setupUi(QWidget *ProductListMenu)
    {
        if (ProductListMenu->objectName().isEmpty())
            ProductListMenu->setObjectName(QString::fromUtf8("ProductListMenu"));
        ProductListMenu->resize(1171, 531);
        ProductListMenu->setInputMethodHints(Qt::ImhNoTextHandles);
        frame = new QFrame(ProductListMenu);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(20, 20, 1121, 481));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(frame);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 40, 1011, 391));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        productWidget = new QTreeWidget(layoutWidget);
        productWidget->setObjectName(QString::fromUtf8("productWidget"));

        verticalLayout_4->addWidget(productWidget);

        registerButton = new QPushButton(layoutWidget);
        registerButton->setObjectName(QString::fromUtf8("registerButton"));

        verticalLayout_4->addWidget(registerButton);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        orderWidget = new QTableWidget(layoutWidget);
        if (orderWidget->columnCount() < 5)
            orderWidget->setColumnCount(5);
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

        verticalLayout->addWidget(orderWidget);

        noteInput = new QTextBrowser(layoutWidget);
        noteInput->setObjectName(QString::fromUtf8("noteInput"));
        noteInput->setReadOnly(false);

        verticalLayout->addWidget(noteInput);


        verticalLayout_2->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        addPushButton = new QPushButton(layoutWidget);
        addPushButton->setObjectName(QString::fromUtf8("addPushButton"));

        verticalLayout_3->addWidget(addPushButton);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_3->addWidget(pushButton);

        backPushButton = new QPushButton(layoutWidget);
        backPushButton->setObjectName(QString::fromUtf8("backPushButton"));

        verticalLayout_3->addWidget(backPushButton);


        verticalLayout_2->addLayout(verticalLayout_3);


        horizontalLayout->addLayout(verticalLayout_2);


        retranslateUi(ProductListMenu);

        QMetaObject::connectSlotsByName(ProductListMenu);
    } // setupUi

    void retranslateUi(QWidget *ProductListMenu)
    {
        ProductListMenu->setWindowTitle(QCoreApplication::translate("ProductListMenu", "QuickOrder", nullptr));
#if QT_CONFIG(accessibility)
        ProductListMenu->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
        QTreeWidgetItem *___qtreewidgetitem = productWidget->headerItem();
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("ProductListMenu", "Pratos", nullptr));
        registerButton->setText(QCoreApplication::translate("ProductListMenu", "Registrar Pedido", nullptr));
        QTableWidgetItem *___qtablewidgetitem = orderWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("ProductListMenu", "Id", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = orderWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("ProductListMenu", "Prato", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = orderWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("ProductListMenu", "Quantidade", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = orderWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("ProductListMenu", "Pre\303\247o", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = orderWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("ProductListMenu", "Observa\303\247\303\243o", nullptr));
        noteInput->setPlaceholderText(QCoreApplication::translate("ProductListMenu", "Adicione observa\303\247\303\243o  do pedido", nullptr));
        addPushButton->setText(QCoreApplication::translate("ProductListMenu", "Adicionar coment\303\241rio", nullptr));
        pushButton->setText(QCoreApplication::translate("ProductListMenu", "Remover Pedido", nullptr));
        backPushButton->setText(QCoreApplication::translate("ProductListMenu", "Voltar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProductListMenu: public Ui_ProductListMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUCTLISTMENU_H
