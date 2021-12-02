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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UpdateInventoryMenu
{
public:
    QListWidget *inventoryListWidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QDoubleSpinBox *quantityDoubleSpinBox;
    QLabel *label;
    QLabel *label_2;
    QPushButton *updateButton;
    QLineEdit *nameInput;
    QPushButton *backButton;

    void setupUi(QWidget *UpdateInventoryMenu)
    {
        if (UpdateInventoryMenu->objectName().isEmpty())
            UpdateInventoryMenu->setObjectName(QString::fromUtf8("UpdateInventoryMenu"));
        UpdateInventoryMenu->resize(400, 300);
        inventoryListWidget = new QListWidget(UpdateInventoryMenu);
        inventoryListWidget->setObjectName(QString::fromUtf8("inventoryListWidget"));
        inventoryListWidget->setGeometry(QRect(10, 20, 381, 221));
        layoutWidget = new QWidget(UpdateInventoryMenu);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 250, 381, 44));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        quantityDoubleSpinBox = new QDoubleSpinBox(layoutWidget);
        quantityDoubleSpinBox->setObjectName(QString::fromUtf8("quantityDoubleSpinBox"));

        gridLayout->addWidget(quantityDoubleSpinBox, 1, 2, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 1, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        updateButton = new QPushButton(layoutWidget);
        updateButton->setObjectName(QString::fromUtf8("updateButton"));

        gridLayout->addWidget(updateButton, 1, 3, 1, 1);

        nameInput = new QLineEdit(layoutWidget);
        nameInput->setObjectName(QString::fromUtf8("nameInput"));

        gridLayout->addWidget(nameInput, 1, 1, 1, 1);

        backButton = new QPushButton(layoutWidget);
        backButton->setObjectName(QString::fromUtf8("backButton"));

        gridLayout->addWidget(backButton, 1, 0, 1, 1);


        retranslateUi(UpdateInventoryMenu);

        QMetaObject::connectSlotsByName(UpdateInventoryMenu);
    } // setupUi

    void retranslateUi(QWidget *UpdateInventoryMenu)
    {
        UpdateInventoryMenu->setWindowTitle(QCoreApplication::translate("UpdateInventoryMenu", "Form", nullptr));
        label->setText(QCoreApplication::translate("UpdateInventoryMenu", "Insumo", nullptr));
        label_2->setText(QCoreApplication::translate("UpdateInventoryMenu", "Quantidade", nullptr));
        updateButton->setText(QCoreApplication::translate("UpdateInventoryMenu", "Atualizar", nullptr));
        nameInput->setPlaceholderText(QCoreApplication::translate("UpdateInventoryMenu", "Nome do Insumo", nullptr));
        backButton->setText(QCoreApplication::translate("UpdateInventoryMenu", "Voltar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UpdateInventoryMenu: public Ui_UpdateInventoryMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEINVENTORYMENU_H
