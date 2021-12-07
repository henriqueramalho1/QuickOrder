/********************************************************************************
** Form generated from reading UI file 'orderregistermenu.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDERREGISTERMENU_H
#define UI_ORDERREGISTERMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OrderRegisterMenu
{
public:
    QFrame *frame;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QComboBox *tableSelection;
    QLabel *label_2;
    QListWidget *costumerSelection;
    QPushButton *pushButton;

    void setupUi(QWidget *OrderRegisterMenu)
    {
        if (OrderRegisterMenu->objectName().isEmpty())
            OrderRegisterMenu->setObjectName(QString::fromUtf8("OrderRegisterMenu"));
        OrderRegisterMenu->resize(400, 300);
        frame = new QFrame(OrderRegisterMenu);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(10, 10, 381, 281));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(frame);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 10, 341, 251));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
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


        retranslateUi(OrderRegisterMenu);

        QMetaObject::connectSlotsByName(OrderRegisterMenu);
    } // setupUi

    void retranslateUi(QWidget *OrderRegisterMenu)
    {
        OrderRegisterMenu->setWindowTitle(QCoreApplication::translate("OrderRegisterMenu", "QuickOrder", nullptr));
        label->setText(QCoreApplication::translate("OrderRegisterMenu", "Selecione a mesa do consumidor", nullptr));
        label_2->setText(QCoreApplication::translate("OrderRegisterMenu", "Consumidores cadastrados", nullptr));
        pushButton->setText(QCoreApplication::translate("OrderRegisterMenu", "Voltar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OrderRegisterMenu: public Ui_OrderRegisterMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDERREGISTERMENU_H
