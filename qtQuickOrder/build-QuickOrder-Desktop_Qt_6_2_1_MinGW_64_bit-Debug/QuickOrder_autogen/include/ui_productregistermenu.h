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
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProductRegisterMenu
{
public:
    QFrame *frame;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLineEdit *ingredientInput;
    QLineEdit *ingredientInput_2;
    QLineEdit *ingredientInput_3;
    QLineEdit *ingredientInput_4;
    QLineEdit *ingredientInput_5;
    QPushButton *registerButton;
    QPushButton *backButton;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *nameInput;
    QDoubleSpinBox *doubleSpinBox;

    void setupUi(QWidget *ProductRegisterMenu)
    {
        if (ProductRegisterMenu->objectName().isEmpty())
            ProductRegisterMenu->setObjectName(QString::fromUtf8("ProductRegisterMenu"));
        ProductRegisterMenu->resize(400, 300);
        frame = new QFrame(ProductRegisterMenu);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(10, 10, 381, 281));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(frame);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 60, 341, 209));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        ingredientInput = new QLineEdit(layoutWidget);
        ingredientInput->setObjectName(QString::fromUtf8("ingredientInput"));

        verticalLayout->addWidget(ingredientInput);

        ingredientInput_2 = new QLineEdit(layoutWidget);
        ingredientInput_2->setObjectName(QString::fromUtf8("ingredientInput_2"));

        verticalLayout->addWidget(ingredientInput_2);

        ingredientInput_3 = new QLineEdit(layoutWidget);
        ingredientInput_3->setObjectName(QString::fromUtf8("ingredientInput_3"));

        verticalLayout->addWidget(ingredientInput_3);

        ingredientInput_4 = new QLineEdit(layoutWidget);
        ingredientInput_4->setObjectName(QString::fromUtf8("ingredientInput_4"));

        verticalLayout->addWidget(ingredientInput_4);

        ingredientInput_5 = new QLineEdit(layoutWidget);
        ingredientInput_5->setObjectName(QString::fromUtf8("ingredientInput_5"));

        verticalLayout->addWidget(ingredientInput_5);

        registerButton = new QPushButton(layoutWidget);
        registerButton->setObjectName(QString::fromUtf8("registerButton"));

        verticalLayout->addWidget(registerButton);

        backButton = new QPushButton(layoutWidget);
        backButton->setObjectName(QString::fromUtf8("backButton"));

        verticalLayout->addWidget(backButton);

        layoutWidget1 = new QWidget(frame);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 20, 341, 26));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        nameInput = new QLineEdit(layoutWidget1);
        nameInput->setObjectName(QString::fromUtf8("nameInput"));

        horizontalLayout->addWidget(nameInput);


        horizontalLayout_2->addLayout(horizontalLayout);

        doubleSpinBox = new QDoubleSpinBox(layoutWidget1);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));

        horizontalLayout_2->addWidget(doubleSpinBox);


        retranslateUi(ProductRegisterMenu);

        QMetaObject::connectSlotsByName(ProductRegisterMenu);
    } // setupUi

    void retranslateUi(QWidget *ProductRegisterMenu)
    {
        ProductRegisterMenu->setWindowTitle(QCoreApplication::translate("ProductRegisterMenu", "QuickOrder", nullptr));
        label_2->setText(QCoreApplication::translate("ProductRegisterMenu", "Ingredientes", nullptr));
        ingredientInput->setText(QString());
        ingredientInput->setPlaceholderText(QCoreApplication::translate("ProductRegisterMenu", "Ingrediente 1", nullptr));
        ingredientInput_2->setPlaceholderText(QCoreApplication::translate("ProductRegisterMenu", "Ingrediente 2", nullptr));
        ingredientInput_3->setPlaceholderText(QCoreApplication::translate("ProductRegisterMenu", "Ingrediente 3", nullptr));
        ingredientInput_4->setPlaceholderText(QCoreApplication::translate("ProductRegisterMenu", "Ingrediente 4", nullptr));
        ingredientInput_5->setPlaceholderText(QCoreApplication::translate("ProductRegisterMenu", "Ingrediente 5", nullptr));
        registerButton->setText(QCoreApplication::translate("ProductRegisterMenu", "Registrar Produto", nullptr));
        backButton->setText(QCoreApplication::translate("ProductRegisterMenu", "Voltar", nullptr));
        label->setText(QCoreApplication::translate("ProductRegisterMenu", "Nome do Produto", nullptr));
        nameInput->setText(QString());
        nameInput->setPlaceholderText(QCoreApplication::translate("ProductRegisterMenu", "Nome do produto", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProductRegisterMenu: public Ui_ProductRegisterMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUCTREGISTERMENU_H
