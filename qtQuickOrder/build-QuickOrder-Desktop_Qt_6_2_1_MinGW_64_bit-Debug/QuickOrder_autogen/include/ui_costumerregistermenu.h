/********************************************************************************
** Form generated from reading UI file 'costumerregistermenu.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COSTUMERREGISTERMENU_H
#define UI_COSTUMERREGISTERMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CostumerRegisterMenu
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *nameInput;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpinBox *tableSelect;
    QHBoxLayout *horizontalLayout_3;
    QLabel *status;
    QLabel *modStatus;
    QVBoxLayout *verticalLayout;
    QListWidget *costumerWidget;
    QPushButton *registerButton;
    QPushButton *backButton;

    void setupUi(QWidget *CostumerRegisterMenu)
    {
        if (CostumerRegisterMenu->objectName().isEmpty())
            CostumerRegisterMenu->setObjectName(QString::fromUtf8("CostumerRegisterMenu"));
        CostumerRegisterMenu->resize(400, 300);
        layoutWidget = new QWidget(CostumerRegisterMenu);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 381, 271));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        nameInput = new QLineEdit(layoutWidget);
        nameInput->setObjectName(QString::fromUtf8("nameInput"));

        horizontalLayout->addWidget(nameInput);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        tableSelect = new QSpinBox(layoutWidget);
        tableSelect->setObjectName(QString::fromUtf8("tableSelect"));

        horizontalLayout_2->addWidget(tableSelect);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        status = new QLabel(layoutWidget);
        status->setObjectName(QString::fromUtf8("status"));
        status->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(status);

        modStatus = new QLabel(layoutWidget);
        modStatus->setObjectName(QString::fromUtf8("modStatus"));
        modStatus->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(modStatus);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        costumerWidget = new QListWidget(layoutWidget);
        costumerWidget->setObjectName(QString::fromUtf8("costumerWidget"));

        verticalLayout->addWidget(costumerWidget);

        registerButton = new QPushButton(layoutWidget);
        registerButton->setObjectName(QString::fromUtf8("registerButton"));

        verticalLayout->addWidget(registerButton);

        backButton = new QPushButton(layoutWidget);
        backButton->setObjectName(QString::fromUtf8("backButton"));

        verticalLayout->addWidget(backButton);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(CostumerRegisterMenu);

        QMetaObject::connectSlotsByName(CostumerRegisterMenu);
    } // setupUi

    void retranslateUi(QWidget *CostumerRegisterMenu)
    {
        CostumerRegisterMenu->setWindowTitle(QCoreApplication::translate("CostumerRegisterMenu", "QuickOrder", nullptr));
        label->setText(QCoreApplication::translate("CostumerRegisterMenu", "Nome do Consumidor", nullptr));
        nameInput->setPlaceholderText(QCoreApplication::translate("CostumerRegisterMenu", "Nome", nullptr));
        label_2->setText(QCoreApplication::translate("CostumerRegisterMenu", "Mesa", nullptr));
        status->setText(QCoreApplication::translate("CostumerRegisterMenu", "Status:", nullptr));
        modStatus->setText(QCoreApplication::translate("CostumerRegisterMenu", "?", nullptr));
        registerButton->setText(QCoreApplication::translate("CostumerRegisterMenu", "Cadastrar", nullptr));
        backButton->setText(QCoreApplication::translate("CostumerRegisterMenu", "Voltar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CostumerRegisterMenu: public Ui_CostumerRegisterMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COSTUMERREGISTERMENU_H
