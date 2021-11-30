/********************************************************************************
** Form generated from reading UI file 'productregistermenu.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUCTREGISTERMENU_H
#define UI_PRODUCTREGISTERMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProductRegisterMenu
{
public:
    QLineEdit *nameInput;
    QLabel *label;
    QLabel *label_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *ingredientInput;
    QLineEdit *ingredientInput_2;
    QLineEdit *ingredientInput_3;
    QLineEdit *ingredientInput_4;
    QLineEdit *ingredientInput_5;
    QPushButton *registerButton;
    QPushButton *backButton;

    void setupUi(QWidget *ProductRegisterMenu)
    {
        if (ProductRegisterMenu->objectName().isEmpty())
            ProductRegisterMenu->setObjectName(QString::fromUtf8("ProductRegisterMenu"));
        ProductRegisterMenu->resize(400, 300);
        nameInput = new QLineEdit(ProductRegisterMenu);
        nameInput->setObjectName(QString::fromUtf8("nameInput"));
        nameInput->setGeometry(QRect(140, 10, 241, 21));
        label = new QLabel(ProductRegisterMenu);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 101, 20));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(ProductRegisterMenu);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(150, 40, 91, 20));
        label_2->setAlignment(Qt::AlignCenter);
        verticalLayoutWidget = new QWidget(ProductRegisterMenu);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 70, 351, 191));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        ingredientInput = new QLineEdit(verticalLayoutWidget);
        ingredientInput->setObjectName(QString::fromUtf8("ingredientInput"));

        verticalLayout->addWidget(ingredientInput);

        ingredientInput_2 = new QLineEdit(verticalLayoutWidget);
        ingredientInput_2->setObjectName(QString::fromUtf8("ingredientInput_2"));

        verticalLayout->addWidget(ingredientInput_2);

        ingredientInput_3 = new QLineEdit(verticalLayoutWidget);
        ingredientInput_3->setObjectName(QString::fromUtf8("ingredientInput_3"));

        verticalLayout->addWidget(ingredientInput_3);

        ingredientInput_4 = new QLineEdit(verticalLayoutWidget);
        ingredientInput_4->setObjectName(QString::fromUtf8("ingredientInput_4"));

        verticalLayout->addWidget(ingredientInput_4);

        ingredientInput_5 = new QLineEdit(verticalLayoutWidget);
        ingredientInput_5->setObjectName(QString::fromUtf8("ingredientInput_5"));

        verticalLayout->addWidget(ingredientInput_5);

        registerButton = new QPushButton(ProductRegisterMenu);
        registerButton->setObjectName(QString::fromUtf8("registerButton"));
        registerButton->setGeometry(QRect(270, 270, 101, 21));
        backButton = new QPushButton(ProductRegisterMenu);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(20, 270, 80, 21));

        retranslateUi(ProductRegisterMenu);

        QMetaObject::connectSlotsByName(ProductRegisterMenu);
    } // setupUi

    void retranslateUi(QWidget *ProductRegisterMenu)
    {
        ProductRegisterMenu->setWindowTitle(QCoreApplication::translate("ProductRegisterMenu", "Form", nullptr));
        nameInput->setText(QString());
        nameInput->setPlaceholderText(QCoreApplication::translate("ProductRegisterMenu", "Nome do produto", nullptr));
        label->setText(QCoreApplication::translate("ProductRegisterMenu", "Nome do Produto", nullptr));
        label_2->setText(QCoreApplication::translate("ProductRegisterMenu", "Ingredientes", nullptr));
        ingredientInput->setText(QString());
        ingredientInput->setPlaceholderText(QCoreApplication::translate("ProductRegisterMenu", "Ingrediente 1", nullptr));
        ingredientInput_2->setPlaceholderText(QCoreApplication::translate("ProductRegisterMenu", "Ingrediente 2", nullptr));
        ingredientInput_3->setPlaceholderText(QCoreApplication::translate("ProductRegisterMenu", "Ingrediente 3", nullptr));
        ingredientInput_4->setPlaceholderText(QCoreApplication::translate("ProductRegisterMenu", "Ingrediente 4", nullptr));
        ingredientInput_5->setPlaceholderText(QCoreApplication::translate("ProductRegisterMenu", "Ingrediente 5", nullptr));
        registerButton->setText(QCoreApplication::translate("ProductRegisterMenu", "Registrar Produto", nullptr));
        backButton->setText(QCoreApplication::translate("ProductRegisterMenu", "Voltar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProductRegisterMenu: public Ui_ProductRegisterMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUCTREGISTERMENU_H
