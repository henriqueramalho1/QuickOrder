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
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLineEdit *ingredientInput;
    QLineEdit *ingredientInput_2;
    QLineEdit *ingredientInput_3;
    QLineEdit *ingredientInput_4;
    QLineEdit *ingredientInput_5;
    QPushButton *registerButton;
    QPushButton *backButton;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *nameInput;

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
        widget = new QWidget(frame);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 60, 341, 209));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        ingredientInput = new QLineEdit(widget);
        ingredientInput->setObjectName(QString::fromUtf8("ingredientInput"));

        verticalLayout->addWidget(ingredientInput);

        ingredientInput_2 = new QLineEdit(widget);
        ingredientInput_2->setObjectName(QString::fromUtf8("ingredientInput_2"));

        verticalLayout->addWidget(ingredientInput_2);

        ingredientInput_3 = new QLineEdit(widget);
        ingredientInput_3->setObjectName(QString::fromUtf8("ingredientInput_3"));

        verticalLayout->addWidget(ingredientInput_3);

        ingredientInput_4 = new QLineEdit(widget);
        ingredientInput_4->setObjectName(QString::fromUtf8("ingredientInput_4"));

        verticalLayout->addWidget(ingredientInput_4);

        ingredientInput_5 = new QLineEdit(widget);
        ingredientInput_5->setObjectName(QString::fromUtf8("ingredientInput_5"));

        verticalLayout->addWidget(ingredientInput_5);

        registerButton = new QPushButton(widget);
        registerButton->setObjectName(QString::fromUtf8("registerButton"));

        verticalLayout->addWidget(registerButton);

        backButton = new QPushButton(widget);
        backButton->setObjectName(QString::fromUtf8("backButton"));

        verticalLayout->addWidget(backButton);

        widget1 = new QWidget(frame);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(90, 20, 199, 24));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        nameInput = new QLineEdit(widget1);
        nameInput->setObjectName(QString::fromUtf8("nameInput"));

        horizontalLayout->addWidget(nameInput);

        frame->raise();

        retranslateUi(ProductRegisterMenu);

        QMetaObject::connectSlotsByName(ProductRegisterMenu);
    } // setupUi

    void retranslateUi(QWidget *ProductRegisterMenu)
    {
        ProductRegisterMenu->setWindowTitle(QCoreApplication::translate("ProductRegisterMenu", "Form", nullptr));
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
