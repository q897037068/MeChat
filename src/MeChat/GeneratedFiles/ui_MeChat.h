/********************************************************************************
** Form generated from reading UI file 'MeChat.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MECHAT_H
#define UI_MECHAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MeChatClass
{
public:

    void setupUi(QWidget *MeChatClass)
    {
        if (MeChatClass->objectName().isEmpty())
            MeChatClass->setObjectName(QStringLiteral("MeChatClass"));
        MeChatClass->resize(600, 400);

        retranslateUi(MeChatClass);

        QMetaObject::connectSlotsByName(MeChatClass);
    } // setupUi

    void retranslateUi(QWidget *MeChatClass)
    {
        MeChatClass->setWindowTitle(QApplication::translate("MeChatClass", "MeChat", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MeChatClass: public Ui_MeChatClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MECHAT_H
