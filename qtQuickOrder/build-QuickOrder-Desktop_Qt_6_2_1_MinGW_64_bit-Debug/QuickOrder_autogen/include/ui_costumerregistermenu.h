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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CostumerRegisterMenu
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *nameInput;
    QLabel *label_2;
    QSpinBox *tableSelect;
    QPushButton *registerButton;
    QPushButton *backButton;

    void setupUi(QWidget *CostumerRegisterMenu)
    {
        if (CostumerRegisterMenu->objectName().isEmpty())
            CostumerRegisterMenu->setObjectName(QString::fromUtf8("CostumerRegisterMenu"));
        CostumerRegisterMenu->resize(400, 300);
        widget = new QWidget(CostumerRegisterMenu);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(9, 11, 381, 281));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        nameInput = new QLineEdit(widget);
        nameInput->setObjectName(QString::fromUtf8("nameInput"));

        formLayout->setWidget(0, QFormLayout::FieldRole, nameInput);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        tableSelect = new QSpinBox(widget);
        tableSelect->setObjectName(QString::fromUtf8("tableSelect"));

        formLayout->setWidget(1, QFormLayout::FieldRole, tableSelect);


        verticalLayout->addLayout(formLayout);

        registerButton = new QPushButton(widget);
        registerButton->setObjectName(QString::fromUtf8("registerButton"));

        verticalLayout->addWidget(registerButton);

        backButton = new QPushButton(widget);
        backButton->setObjectName(QString::fromUtf8("backButton"));

        verticalLayout->addWidget(backButton);


        retranslateUi(CostumerRegisterMenu);

        QMetaObject::connectSlotsByName(CostumerRegisterMenu);
    } // setupUi

    void retranslateUi(QWidget *CostumerRegisterMenu)
    {
        CostumerRegisterMenu->setWindowTitle(QCoreApplication::translate("CostumerRegisterMenu", "Form", nullptr));
        label->setText(QCoreApplication::translate("CostumerRegisterMenu", "Nome do Consumidor", nullptr));
        nameInput->setPlaceholderText(QCoreApplication::translate("CostumerRegisterMenu", "Nome", nullptr));
        label_2->setText(QCoreApplication::translate("CostumerRegisterMenu", "Mesa", nullptr));
        registerButton->setText(QCoreApplication::translate("CostumerRegisterMenu", "Cadastrar", nullptr));
        backButton->setText(QCoreApplication::translate("CostumerRegisterMenu", "Voltar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CostumerRegisterMenu: public Ui_CostumerRegisterMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COSTUMERREGISTERMENU_H
