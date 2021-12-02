/********************************************************************************
** Form generated from reading UI file 'productlistmenu.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUCTLISTMENU_H
#define UI_PRODUCTLISTMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProductListMenu
{
public:

    void setupUi(QWidget *ProductListMenu)
    {
        if (ProductListMenu->objectName().isEmpty())
            ProductListMenu->setObjectName(QString::fromUtf8("ProductListMenu"));
        ProductListMenu->resize(400, 300);

        retranslateUi(ProductListMenu);

        QMetaObject::connectSlotsByName(ProductListMenu);
    } // setupUi

    void retranslateUi(QWidget *ProductListMenu)
    {
        ProductListMenu->setWindowTitle(QCoreApplication::translate("ProductListMenu", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProductListMenu: public Ui_ProductListMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUCTLISTMENU_H
