/********************************************************************************
** Form generated from reading UI file 'billmenu.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BILLMENU_H
#define UI_BILLMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BillMenu
{
public:
    QFrame *frame;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QComboBox *tableSelection;
    QLabel *label_2;
    QListWidget *costumerSelection;
    QPushButton *pushButton;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *orderWidget;
    QPushButton *removeButton;
    QPushButton *billButton;

    void setupUi(QWidget *BillMenu)
    {
        if (BillMenu->objectName().isEmpty())
            BillMenu->setObjectName(QString::fromUtf8("BillMenu"));
        BillMenu->resize(1067, 487);
        frame = new QFrame(BillMenu);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(10, 10, 1041, 461));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(frame);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 1021, 421));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        tableSelection = new QComboBox(layoutWidget);
        tableSelection->setObjectName(QString::fromUtf8("tableSelection"));

        verticalLayout->addWidget(tableSelection);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        costumerSelection = new QListWidget(layoutWidget);
        costumerSelection->setObjectName(QString::fromUtf8("costumerSelection"));

        verticalLayout->addWidget(costumerSelection);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
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

        verticalLayout_2->addWidget(orderWidget);

        removeButton = new QPushButton(layoutWidget);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));

        verticalLayout_2->addWidget(removeButton);

        billButton = new QPushButton(layoutWidget);
        billButton->setObjectName(QString::fromUtf8("billButton"));

        verticalLayout_2->addWidget(billButton);


        horizontalLayout->addLayout(verticalLayout_2);


        retranslateUi(BillMenu);

        QMetaObject::connectSlotsByName(BillMenu);
    } // setupUi

    void retranslateUi(QWidget *BillMenu)
    {
        BillMenu->setWindowTitle(QCoreApplication::translate("BillMenu", "QuickOrder", nullptr));
        label->setText(QCoreApplication::translate("BillMenu", "Selecione a mesa do consumidor", nullptr));
        label_2->setText(QCoreApplication::translate("BillMenu", "Consumidores cadastrados", nullptr));
        pushButton->setText(QCoreApplication::translate("BillMenu", "Voltar", nullptr));
        QTableWidgetItem *___qtablewidgetitem = orderWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("BillMenu", "Id", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = orderWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("BillMenu", "Prato", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = orderWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("BillMenu", "Quantidade", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = orderWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("BillMenu", "Pre\303\247o", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = orderWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("BillMenu", "Observa\303\247\303\243o", nullptr));
        removeButton->setText(QCoreApplication::translate("BillMenu", "Remover ordem", nullptr));
        billButton->setText(QCoreApplication::translate("BillMenu", "Gerar conta", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BillMenu: public Ui_BillMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BILLMENU_H
