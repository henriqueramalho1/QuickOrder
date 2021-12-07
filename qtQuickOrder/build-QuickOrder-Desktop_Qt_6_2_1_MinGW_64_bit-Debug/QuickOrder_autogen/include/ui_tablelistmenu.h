/********************************************************************************
** Form generated from reading UI file 'tablelistmenu.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLELISTMENU_H
#define UI_TABLELISTMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TableListMenu
{
public:
    QFrame *frame;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QListWidget *listWidget;
    QPushButton *activatePushButton;
    QPushButton *desactivatePushButton;
    QPushButton *addPushButton;
    QPushButton *backPushButton;

    void setupUi(QWidget *TableListMenu)
    {
        if (TableListMenu->objectName().isEmpty())
            TableListMenu->setObjectName(QString::fromUtf8("TableListMenu"));
        TableListMenu->resize(542, 391);
        frame = new QFrame(TableListMenu);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(19, 19, 501, 351));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(frame);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(11, 10, 471, 321));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        listWidget = new QListWidget(layoutWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setAutoFillBackground(false);
        listWidget->setAlternatingRowColors(true);
        listWidget->setSelectionMode(QAbstractItemView::SingleSelection);

        verticalLayout->addWidget(listWidget);

        activatePushButton = new QPushButton(layoutWidget);
        activatePushButton->setObjectName(QString::fromUtf8("activatePushButton"));

        verticalLayout->addWidget(activatePushButton);

        desactivatePushButton = new QPushButton(layoutWidget);
        desactivatePushButton->setObjectName(QString::fromUtf8("desactivatePushButton"));

        verticalLayout->addWidget(desactivatePushButton);

        addPushButton = new QPushButton(layoutWidget);
        addPushButton->setObjectName(QString::fromUtf8("addPushButton"));

        verticalLayout->addWidget(addPushButton);

        backPushButton = new QPushButton(layoutWidget);
        backPushButton->setObjectName(QString::fromUtf8("backPushButton"));

        verticalLayout->addWidget(backPushButton);


        retranslateUi(TableListMenu);

        QMetaObject::connectSlotsByName(TableListMenu);
    } // setupUi

    void retranslateUi(QWidget *TableListMenu)
    {
        TableListMenu->setWindowTitle(QCoreApplication::translate("TableListMenu", "QuickOrder", nullptr));
        label->setText(QCoreApplication::translate("TableListMenu", "Lista de Mesas", nullptr));
        activatePushButton->setText(QCoreApplication::translate("TableListMenu", "Ativar", nullptr));
        desactivatePushButton->setText(QCoreApplication::translate("TableListMenu", "Desativar", nullptr));
        addPushButton->setText(QCoreApplication::translate("TableListMenu", "Adicionar Mesa", nullptr));
        backPushButton->setText(QCoreApplication::translate("TableListMenu", "Voltar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TableListMenu: public Ui_TableListMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLELISTMENU_H
