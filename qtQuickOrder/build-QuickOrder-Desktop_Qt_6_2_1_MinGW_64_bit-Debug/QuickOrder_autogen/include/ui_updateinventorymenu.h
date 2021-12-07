/********************************************************************************
** Form generated from reading UI file 'updateinventorymenu.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEINVENTORYMENU_H
#define UI_UPDATEINVENTORYMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UpdateInventoryMenu
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QListWidget *inventoryListWidget;
    QGridLayout *gridLayout;
    QDoubleSpinBox *quantityDoubleSpinBox;
    QPushButton *updateButton;
    QLineEdit *nameInput;
    QLabel *label;
    QPushButton *backButton;
    QLabel *label_2;

    void setupUi(QWidget *UpdateInventoryMenu)
    {
        if (UpdateInventoryMenu->objectName().isEmpty())
            UpdateInventoryMenu->setObjectName(QString::fromUtf8("UpdateInventoryMenu"));
        UpdateInventoryMenu->resize(480, 360);
        widget = new QWidget(UpdateInventoryMenu);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 20, 431, 321));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        inventoryListWidget = new QListWidget(widget);
        inventoryListWidget->setObjectName(QString::fromUtf8("inventoryListWidget"));

        verticalLayout->addWidget(inventoryListWidget);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        quantityDoubleSpinBox = new QDoubleSpinBox(widget);
        quantityDoubleSpinBox->setObjectName(QString::fromUtf8("quantityDoubleSpinBox"));

        gridLayout->addWidget(quantityDoubleSpinBox, 1, 2, 1, 1);

        updateButton = new QPushButton(widget);
        updateButton->setObjectName(QString::fromUtf8("updateButton"));

        gridLayout->addWidget(updateButton, 1, 3, 1, 1);

        nameInput = new QLineEdit(widget);
        nameInput->setObjectName(QString::fromUtf8("nameInput"));

        gridLayout->addWidget(nameInput, 1, 1, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 1, 1, 1);

        backButton = new QPushButton(widget);
        backButton->setObjectName(QString::fromUtf8("backButton"));

        gridLayout->addWidget(backButton, 1, 0, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(UpdateInventoryMenu);

        QMetaObject::connectSlotsByName(UpdateInventoryMenu);
    } // setupUi

    void retranslateUi(QWidget *UpdateInventoryMenu)
    {
        UpdateInventoryMenu->setWindowTitle(QCoreApplication::translate("UpdateInventoryMenu", "QuickOrder", nullptr));
        updateButton->setText(QCoreApplication::translate("UpdateInventoryMenu", "Atualizar", nullptr));
        nameInput->setPlaceholderText(QCoreApplication::translate("UpdateInventoryMenu", "Nome do Insumo", nullptr));
        label->setText(QCoreApplication::translate("UpdateInventoryMenu", "Insumo", nullptr));
        backButton->setText(QCoreApplication::translate("UpdateInventoryMenu", "Voltar", nullptr));
        label_2->setText(QCoreApplication::translate("UpdateInventoryMenu", "Quantidade", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UpdateInventoryMenu: public Ui_UpdateInventoryMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEINVENTORYMENU_H
