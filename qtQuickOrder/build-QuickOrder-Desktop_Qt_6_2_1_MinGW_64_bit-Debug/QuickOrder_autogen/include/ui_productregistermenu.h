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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProductRegisterMenu
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *ProductRegisterMenu)
    {
        if (ProductRegisterMenu->objectName().isEmpty())
            ProductRegisterMenu->setObjectName(QString::fromUtf8("ProductRegisterMenu"));
        ProductRegisterMenu->resize(400, 300);
        pushButton = new QPushButton(ProductRegisterMenu);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(170, 270, 80, 21));

        retranslateUi(ProductRegisterMenu);

        QMetaObject::connectSlotsByName(ProductRegisterMenu);
    } // setupUi

    void retranslateUi(QWidget *ProductRegisterMenu)
    {
        ProductRegisterMenu->setWindowTitle(QCoreApplication::translate("ProductRegisterMenu", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("ProductRegisterMenu", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProductRegisterMenu: public Ui_ProductRegisterMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUCTREGISTERMENU_H
