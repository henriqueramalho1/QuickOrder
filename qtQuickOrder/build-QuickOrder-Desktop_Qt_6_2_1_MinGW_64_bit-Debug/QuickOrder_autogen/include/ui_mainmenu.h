/********************************************************************************
** Form generated from reading UI file 'mainmenu.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINMENU_H
#define UI_MAINMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainMenu
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *registerProductButton;
    QPushButton *addCostumerButton;
    QPushButton *orderButton;
    QPushButton *closeCostumerButton;
    QPushButton *orderStatusButton;
    QPushButton *cancelOrderButton;
    QPushButton *pushButton_7;
    QPushButton *updateTableStatusButton;
    QPushButton *updateInventoryButton;
    QPushButton *showOrdersButton;
    QPushButton *checkTableStatusButton;
    QPushButton *backButton;

    void setupUi(QWidget *MainMenu)
    {
        if (MainMenu->objectName().isEmpty())
            MainMenu->setObjectName(QString::fromUtf8("MainMenu"));
        MainMenu->resize(800, 600);
        widget = new QWidget(MainMenu);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(70, 20, 661, 551));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        registerProductButton = new QPushButton(widget);
        registerProductButton->setObjectName(QString::fromUtf8("registerProductButton"));

        verticalLayout->addWidget(registerProductButton);

        addCostumerButton = new QPushButton(widget);
        addCostumerButton->setObjectName(QString::fromUtf8("addCostumerButton"));

        verticalLayout->addWidget(addCostumerButton);

        orderButton = new QPushButton(widget);
        orderButton->setObjectName(QString::fromUtf8("orderButton"));

        verticalLayout->addWidget(orderButton);

        closeCostumerButton = new QPushButton(widget);
        closeCostumerButton->setObjectName(QString::fromUtf8("closeCostumerButton"));

        verticalLayout->addWidget(closeCostumerButton);

        orderStatusButton = new QPushButton(widget);
        orderStatusButton->setObjectName(QString::fromUtf8("orderStatusButton"));

        verticalLayout->addWidget(orderStatusButton);

        cancelOrderButton = new QPushButton(widget);
        cancelOrderButton->setObjectName(QString::fromUtf8("cancelOrderButton"));

        verticalLayout->addWidget(cancelOrderButton);

        pushButton_7 = new QPushButton(widget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        verticalLayout->addWidget(pushButton_7);

        updateTableStatusButton = new QPushButton(widget);
        updateTableStatusButton->setObjectName(QString::fromUtf8("updateTableStatusButton"));

        verticalLayout->addWidget(updateTableStatusButton);

        updateInventoryButton = new QPushButton(widget);
        updateInventoryButton->setObjectName(QString::fromUtf8("updateInventoryButton"));

        verticalLayout->addWidget(updateInventoryButton);

        showOrdersButton = new QPushButton(widget);
        showOrdersButton->setObjectName(QString::fromUtf8("showOrdersButton"));

        verticalLayout->addWidget(showOrdersButton);

        checkTableStatusButton = new QPushButton(widget);
        checkTableStatusButton->setObjectName(QString::fromUtf8("checkTableStatusButton"));

        verticalLayout->addWidget(checkTableStatusButton);

        backButton = new QPushButton(widget);
        backButton->setObjectName(QString::fromUtf8("backButton"));

        verticalLayout->addWidget(backButton);


        retranslateUi(MainMenu);

        QMetaObject::connectSlotsByName(MainMenu);
    } // setupUi

    void retranslateUi(QWidget *MainMenu)
    {
        MainMenu->setWindowTitle(QCoreApplication::translate("MainMenu", "MainMenu", nullptr));
        registerProductButton->setText(QCoreApplication::translate("MainMenu", "Cadastrar prato", nullptr));
        addCostumerButton->setText(QCoreApplication::translate("MainMenu", "Adicionar consumidor", nullptr));
        orderButton->setText(QCoreApplication::translate("MainMenu", "Efetuar pedido", nullptr));
        closeCostumerButton->setText(QCoreApplication::translate("MainMenu", "Fechar conta", nullptr));
        orderStatusButton->setText(QCoreApplication::translate("MainMenu", "Verificar status de pedido", nullptr));
        cancelOrderButton->setText(QCoreApplication::translate("MainMenu", "Cancelar pedido", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainMenu", "Atualizar status do pedido", nullptr));
        updateTableStatusButton->setText(QCoreApplication::translate("MainMenu", "Atualizar status da mesa", nullptr));
        updateInventoryButton->setText(QCoreApplication::translate("MainMenu", "Atualizar estoque", nullptr));
        showOrdersButton->setText(QCoreApplication::translate("MainMenu", "Exibir pedidos", nullptr));
        checkTableStatusButton->setText(QCoreApplication::translate("MainMenu", "Verificar status das mesas", nullptr));
        backButton->setText(QCoreApplication::translate("MainMenu", "Sair", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainMenu: public Ui_MainMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINMENU_H
