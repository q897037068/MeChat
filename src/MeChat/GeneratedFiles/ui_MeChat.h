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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MeChatClass
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *WindowTitleBackGround;
    QHBoxLayout *horizontalLayout;
    QLabel *WindowImage;
    QLabel *LoginName;
    QWidget *horizontalWidget;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *WindowHuiHua;
    QToolButton *WindowQunFa;
    QToolButton *WindowFriend;
    QToolButton *WindowKeHu;
    QToolButton *WindowBaoBiao;
    QToolButton *WindowJiShiBen;
    QToolButton *WindowHelp;
    QSpacerItem *horizontalSpacer;
    QWidget *horizontalWidget1;
    QHBoxLayout *horizontalLayout_3;
    QToolButton *WindowMin;
    QToolButton *WindowMax;
    QToolButton *WindowExit;
    QStackedWidget *WindowTitle;
    QWidget *page;
    QWidget *page_2;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton;

    void setupUi(QWidget *MeChatClass)
    {
        if (MeChatClass->objectName().isEmpty())
            MeChatClass->setObjectName(QStringLiteral("MeChatClass"));
        MeChatClass->resize(1024, 768);
        MeChatClass->setMinimumSize(QSize(1024, 768));
        verticalLayout = new QVBoxLayout(MeChatClass);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        WindowTitleBackGround = new QWidget(MeChatClass);
        WindowTitleBackGround->setObjectName(QStringLiteral("WindowTitleBackGround"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(WindowTitleBackGround->sizePolicy().hasHeightForWidth());
        WindowTitleBackGround->setSizePolicy(sizePolicy);
        WindowTitleBackGround->setMinimumSize(QSize(0, 70));
        WindowTitleBackGround->setMaximumSize(QSize(16777215, 70));
        WindowTitleBackGround->setStyleSheet(QLatin1String("QWidget#WindowTitleBackGround\n"
"{\n"
"background-color: qconicalgradient(cx:0.709139, cy:0.8245, 	angle:0, stop:0.240816 rgba(52, 72, 161, 255), stop:0.240997 rgba(62, 88, 201, 255), stop:0.258892 rgba(62, 88, 201, 255), stop:0.259223 rgba(42, 153, 235, 255), stop:0.758252 rgba(42, 153, 235, 255), stop:0.759223 rgba(52, 72, 161, 255));\n"
"}"));
        horizontalLayout = new QHBoxLayout(WindowTitleBackGround);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        WindowImage = new QLabel(WindowTitleBackGround);
        WindowImage->setObjectName(QStringLiteral("WindowImage"));
        sizePolicy.setHeightForWidth(WindowImage->sizePolicy().hasHeightForWidth());
        WindowImage->setSizePolicy(sizePolicy);
        WindowImage->setMinimumSize(QSize(42, 32));
        WindowImage->setMaximumSize(QSize(42, 32));
        WindowImage->setStyleSheet(QLatin1String("QLabel#WindowImage\n"
"{\n"
"	margin-left:10px;\n"
"}"));
        WindowImage->setTextFormat(Qt::AutoText);
        WindowImage->setPixmap(QPixmap(QString::fromUtf8(":/MeChat/Resources/Image/KF.png")));
        WindowImage->setScaledContents(true);
        WindowImage->setAlignment(Qt::AlignCenter);
        WindowImage->setMargin(0);

        horizontalLayout->addWidget(WindowImage);

        LoginName = new QLabel(WindowTitleBackGround);
        LoginName->setObjectName(QStringLiteral("LoginName"));
        LoginName->setMinimumSize(QSize(160, 30));
        LoginName->setMaximumSize(QSize(160, 30));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        LoginName->setFont(font);
        LoginName->setStyleSheet(QLatin1String("QLabel#LoginName\n"
"{\n"
"	color:#FFFFFF;\n"
"	margin-left:5px;\n"
"	\n"
"}\n"
"QLabel#LoginName:hover\n"
"{\n"
"	color:#0000FF;\n"
"}"));

        horizontalLayout->addWidget(LoginName);

        horizontalWidget = new QWidget(WindowTitleBackGround);
        horizontalWidget->setObjectName(QStringLiteral("horizontalWidget"));
        sizePolicy.setHeightForWidth(horizontalWidget->sizePolicy().hasHeightForWidth());
        horizontalWidget->setSizePolicy(sizePolicy);
        horizontalWidget->setMinimumSize(QSize(450, 0));
        horizontalWidget->setMaximumSize(QSize(0, 16777215));
        horizontalWidget->setLayoutDirection(Qt::LeftToRight);
        horizontalLayout_2 = new QHBoxLayout(horizontalWidget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        WindowHuiHua = new QToolButton(horizontalWidget);
        WindowHuiHua->setObjectName(QStringLiteral("WindowHuiHua"));
        WindowHuiHua->setMinimumSize(QSize(26, 70));
        WindowHuiHua->setMaximumSize(QSize(60, 70));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setBold(true);
        font1.setWeight(75);
        WindowHuiHua->setFont(font1);
        WindowHuiHua->setStyleSheet(QLatin1String("QToolButton#WindowHuiHua\n"
"{\n"
"	border-radius:3px;\n"
"	color:#DCDCDC;\n"
"	padding:3px;\n"
"	margin:0px;\n"
"	background:none;\n"
"	border-style:none;\n"
"	icon-size:0px;\n"
"	min-width:20px;\n"
"}\n"
"\n"
"QToolButton#WindowHuiHua:hover\n"
"{\n"
"	color:#FFFFFF;\n"
"	margin:1px 1px 2px 1px;\n"
"	background-color:rgba(51,127,209,230);\n"
"}\n"
"\n"
"QToolButton#WindowHuiHua:pressed\n"
"{\n"
"	border-style:solid;\n"
"border-width:0px 0px 2px 0px;\n"
"padding:4px 4px 2px 4px;\n"
"border-color:#00BB9E;\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #646464,stop:1 #525252);\n"
"}"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/MeChat/Resources/Image/HuiHua.png"), QSize(), QIcon::Normal, QIcon::Off);
        WindowHuiHua->setIcon(icon);
        WindowHuiHua->setIconSize(QSize(32, 32));
        WindowHuiHua->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_2->addWidget(WindowHuiHua);

        WindowQunFa = new QToolButton(horizontalWidget);
        WindowQunFa->setObjectName(QStringLiteral("WindowQunFa"));
        WindowQunFa->setMinimumSize(QSize(26, 70));
        WindowQunFa->setMaximumSize(QSize(60, 70));
        WindowQunFa->setFont(font1);
        WindowQunFa->setStyleSheet(QLatin1String("QToolButton#WindowQunFa\n"
"{\n"
"	border-radius:3px;\n"
"	color:#DCDCDC;\n"
"	padding:3px;\n"
"	margin:0px;\n"
"	background:none;\n"
"	border-style:none;\n"
"	icon-size:0px;\n"
"	min-width:20px;\n"
"}\n"
"\n"
"QToolButton#WindowQunFa:hover\n"
"{\n"
"	color:#FFFFFF;\n"
"	margin:1px 1px 2px 1px;\n"
"	background-color:rgba(51,127,209,230);\n"
"}\n"
"\n"
"QToolButton#WindowQunFa:pressed\n"
"{\n"
"	border-style:solid;\n"
"border-width:0px 0px 2px 0px;\n"
"padding:4px 4px 2px 4px;\n"
"border-color:#00BB9E;\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #646464,stop:1 #525252);\n"
"}"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/MeChat/Resources/Image/QunFa.png"), QSize(), QIcon::Normal, QIcon::Off);
        WindowQunFa->setIcon(icon1);
        WindowQunFa->setIconSize(QSize(32, 32));
        WindowQunFa->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_2->addWidget(WindowQunFa);

        WindowFriend = new QToolButton(horizontalWidget);
        WindowFriend->setObjectName(QStringLiteral("WindowFriend"));
        WindowFriend->setMinimumSize(QSize(26, 70));
        WindowFriend->setMaximumSize(QSize(60, 70));
        WindowFriend->setStyleSheet(QLatin1String("QToolButton#WindowFriend\n"
"{\n"
"	border-radius:3px;\n"
"	color:#DCDCDC;\n"
"	padding:3px;\n"
"	margin:0px;\n"
"	background:none;\n"
"	border-style:none;\n"
"	icon-size:0px;\n"
"	min-width:20px;\n"
"}\n"
"\n"
"QToolButton#WindowFriend:hover\n"
"{\n"
"	color:#FFFFFF;\n"
"	margin:1px 1px 2px 1px;\n"
"	background-color:rgba(51,127,209,230);\n"
"}\n"
"\n"
"QToolButton#WindowFriend:pressed\n"
"{\n"
"	border-style:solid;\n"
"border-width:0px 0px 2px 0px;\n"
"padding:4px 4px 2px 4px;\n"
"border-color:#00BB9E;\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #646464,stop:1 #525252);\n"
"}"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/MeChat/Resources/Image/Friend.png"), QSize(), QIcon::Normal, QIcon::Off);
        WindowFriend->setIcon(icon2);
        WindowFriend->setIconSize(QSize(32, 32));
        WindowFriend->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_2->addWidget(WindowFriend);

        WindowKeHu = new QToolButton(horizontalWidget);
        WindowKeHu->setObjectName(QStringLiteral("WindowKeHu"));
        WindowKeHu->setMinimumSize(QSize(26, 70));
        WindowKeHu->setMaximumSize(QSize(60, 70));
        WindowKeHu->setStyleSheet(QLatin1String("QToolButton#WindowKeHu\n"
"{\n"
"	border-radius:3px;\n"
"	color:#DCDCDC;\n"
"	padding:3px;\n"
"	margin:0px;\n"
"	background:none;\n"
"	border-style:none;\n"
"	icon-size:0px;\n"
"	min-width:20px;\n"
"}\n"
"\n"
"QToolButton#WindowKeHu:hover\n"
"{\n"
"	color:#FFFFFF;\n"
"	margin:1px 1px 2px 1px;\n"
"	background-color:rgba(51,127,209,230);\n"
"}\n"
"\n"
"QToolButton#WindowKeHu:pressed\n"
"{\n"
"	border-style:solid;\n"
"border-width:0px 0px 2px 0px;\n"
"padding:4px 4px 2px 4px;\n"
"border-color:#00BB9E;\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #646464,stop:1 #525252);\n"
"}"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/MeChat/Resources/Image/KeHu.png"), QSize(), QIcon::Normal, QIcon::Off);
        WindowKeHu->setIcon(icon3);
        WindowKeHu->setIconSize(QSize(32, 32));
        WindowKeHu->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_2->addWidget(WindowKeHu);

        WindowBaoBiao = new QToolButton(horizontalWidget);
        WindowBaoBiao->setObjectName(QStringLiteral("WindowBaoBiao"));
        WindowBaoBiao->setMinimumSize(QSize(26, 70));
        WindowBaoBiao->setMaximumSize(QSize(60, 70));
        WindowBaoBiao->setStyleSheet(QLatin1String("QToolButton#WindowBaoBiao\n"
"{\n"
"	border-radius:3px;\n"
"	color:#DCDCDC;\n"
"	padding:3px;\n"
"	margin:0px;\n"
"	background:none;\n"
"	border-style:none;\n"
"	icon-size:0px;\n"
"	min-width:20px;\n"
"}\n"
"\n"
"QToolButton#WindowBaoBiao:hover\n"
"{\n"
"	color:#FFFFFF;\n"
"	margin:1px 1px 2px 1px;\n"
"	background-color:rgba(51,127,209,230);\n"
"}\n"
"\n"
"QToolButton#WindowBaoBiao:pressed\n"
"{\n"
"	border-style:solid;\n"
"border-width:0px 0px 2px 0px;\n"
"padding:4px 4px 2px 4px;\n"
"border-color:#00BB9E;\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #646464,stop:1 #525252);\n"
"}"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/MeChat/Resources/Image/BaoBiao.png"), QSize(), QIcon::Normal, QIcon::Off);
        WindowBaoBiao->setIcon(icon4);
        WindowBaoBiao->setIconSize(QSize(32, 32));
        WindowBaoBiao->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_2->addWidget(WindowBaoBiao);

        WindowJiShiBen = new QToolButton(horizontalWidget);
        WindowJiShiBen->setObjectName(QStringLiteral("WindowJiShiBen"));
        WindowJiShiBen->setMinimumSize(QSize(26, 70));
        WindowJiShiBen->setMaximumSize(QSize(60, 70));
        WindowJiShiBen->setStyleSheet(QLatin1String("QToolButton#WindowJiShiBen\n"
"{\n"
"	border-radius:3px;\n"
"	color:#DCDCDC;\n"
"	padding:3px;\n"
"	margin:0px;\n"
"	background:none;\n"
"	border-style:none;\n"
"	icon-size:0px;\n"
"	min-width:20px;\n"
"}\n"
"\n"
"QToolButton#WindowJiShiBen:hover\n"
"{\n"
"	color:#FFFFFF;\n"
"	margin:1px 1px 2px 1px;\n"
"	background-color:rgba(51,127,209,230);\n"
"}\n"
"\n"
"QToolButton#WindowJiShiBen:pressed\n"
"{\n"
"	border-style:solid;\n"
"border-width:0px 0px 2px 0px;\n"
"padding:4px 4px 2px 4px;\n"
"border-color:#00BB9E;\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #646464,stop:1 #525252);\n"
"}"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/MeChat/Resources/Image/JiShiBen.png"), QSize(), QIcon::Normal, QIcon::Off);
        WindowJiShiBen->setIcon(icon5);
        WindowJiShiBen->setIconSize(QSize(32, 32));
        WindowJiShiBen->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_2->addWidget(WindowJiShiBen);

        WindowHelp = new QToolButton(horizontalWidget);
        WindowHelp->setObjectName(QStringLiteral("WindowHelp"));
        WindowHelp->setMinimumSize(QSize(26, 70));
        WindowHelp->setMaximumSize(QSize(60, 70));
        WindowHelp->setLayoutDirection(Qt::LeftToRight);
        WindowHelp->setStyleSheet(QLatin1String("QToolButton#WindowHelp\n"
"{\n"
"	border-radius:3px;\n"
"	color:#DCDCDC;\n"
"	padding:3px;\n"
"	margin:0px;\n"
"	background:none;\n"
"	border-style:none;\n"
"	icon-size:0px;\n"
"	min-width:20px;\n"
"}\n"
"\n"
"QToolButton#WindowHelp:hover\n"
"{\n"
"	color:#FFFFFF;\n"
"	margin:1px 1px 2px 1px;\n"
"	background-color:rgba(51,127,209,230);\n"
"}\n"
"\n"
"QToolButton#WindowHelp:pressed\n"
"{\n"
"	border-style:solid;\n"
"border-width:0px 0px 2px 0px;\n"
"padding:4px 4px 2px 4px;\n"
"border-color:#00BB9E;\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #646464,stop:1 #525252);\n"
"}"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/MeChat/Resources/Image/Help.png"), QSize(), QIcon::Normal, QIcon::Off);
        WindowHelp->setIcon(icon6);
        WindowHelp->setIconSize(QSize(32, 32));
        WindowHelp->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_2->addWidget(WindowHelp);


        horizontalLayout->addWidget(horizontalWidget);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        horizontalWidget1 = new QWidget(WindowTitleBackGround);
        horizontalWidget1->setObjectName(QStringLiteral("horizontalWidget1"));
        horizontalWidget1->setMinimumSize(QSize(160, 70));
        horizontalLayout_3 = new QHBoxLayout(horizontalWidget1);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        WindowMin = new QToolButton(horizontalWidget1);
        WindowMin->setObjectName(QStringLiteral("WindowMin"));
        WindowMin->setMinimumSize(QSize(26, 32));
        WindowMin->setStyleSheet(QLatin1String("QToolButton#WindowMin\n"
"{\n"
"	border-radius:3px;\n"
"	color:#DCDCDC;\n"
"	padding:3px;\n"
"	margin:0px;\n"
"	background:none;\n"
"	border-style:none;\n"
"	icon-size:0px;\n"
"	min-width:20px;\n"
"}"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/MeChat/Resources/Image/Min.png"), QSize(), QIcon::Normal, QIcon::Off);
        WindowMin->setIcon(icon7);
        WindowMin->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(WindowMin);

        WindowMax = new QToolButton(horizontalWidget1);
        WindowMax->setObjectName(QStringLiteral("WindowMax"));
        WindowMax->setMinimumSize(QSize(26, 30));
        WindowMax->setStyleSheet(QLatin1String("QToolButton#WindowMax\n"
"{\n"
"	border-radius:3px;\n"
"	color:#DCDCDC;\n"
"	padding:3px;\n"
"	margin:0px;\n"
"	background:none;\n"
"	border-style:none;\n"
"	icon-size:0px;\n"
"	min-width:20px;\n"
"}"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/MeChat/Resources/Image/Max.png"), QSize(), QIcon::Normal, QIcon::Off);
        WindowMax->setIcon(icon8);
        WindowMax->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(WindowMax);

        WindowExit = new QToolButton(horizontalWidget1);
        WindowExit->setObjectName(QStringLiteral("WindowExit"));
        WindowExit->setMinimumSize(QSize(26, 32));
        WindowExit->setStyleSheet(QLatin1String("QToolButton#WindowExit\n"
"{\n"
"	border-radius:3px;\n"
"	color:#DCDCDC;\n"
"	padding:3px;\n"
"	margin:0px;\n"
"	background:none;\n"
"	border-style:none;\n"
"	icon-size:0px;\n"
"	min-width:20px;\n"
"}"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/MeChat/Resources/Image/Exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        WindowExit->setIcon(icon9);
        WindowExit->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(WindowExit);


        horizontalLayout->addWidget(horizontalWidget1);


        verticalLayout->addWidget(WindowTitleBackGround);

        WindowTitle = new QStackedWidget(MeChatClass);
        WindowTitle->setObjectName(QStringLiteral("WindowTitle"));
        sizePolicy.setHeightForWidth(WindowTitle->sizePolicy().hasHeightForWidth());
        WindowTitle->setSizePolicy(sizePolicy);
        WindowTitle->setMinimumSize(QSize(60, 60));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        WindowTitle->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        horizontalLayout_4 = new QHBoxLayout(page_2);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        pushButton = new QPushButton(page_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_4->addWidget(pushButton);

        WindowTitle->addWidget(page_2);

        verticalLayout->addWidget(WindowTitle);


        retranslateUi(MeChatClass);
        QObject::connect(WindowMax, SIGNAL(clicked()), MeChatClass, SLOT(showMaximized()));
        QObject::connect(WindowMin, SIGNAL(clicked()), MeChatClass, SLOT(showMinimized()));
        QObject::connect(WindowExit, SIGNAL(clicked()), MeChatClass, SLOT(close()));

        WindowTitle->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MeChatClass);
    } // setupUi

    void retranslateUi(QWidget *MeChatClass)
    {
        MeChatClass->setWindowTitle(QApplication::translate("MeChatClass", "MeChat", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        WindowImage->setToolTip(QApplication::translate("MeChatClass", "<html><head/><body><p>Hello Word!</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        WindowImage->setText(QString());
        LoginName->setText(QApplication::translate("MeChatClass", "\351\243\216\345\271\263\346\265\252\351\235\231\347\232\204\346\230\216\345\244\251", Q_NULLPTR));
        WindowHuiHua->setText(QApplication::translate("MeChatClass", "\344\274\232\350\257\235", Q_NULLPTR));
        WindowQunFa->setText(QApplication::translate("MeChatClass", "\347\276\244\345\217\221", Q_NULLPTR));
        WindowFriend->setText(QApplication::translate("MeChatClass", "\346\234\213\345\217\213\345\234\210", Q_NULLPTR));
        WindowKeHu->setText(QApplication::translate("MeChatClass", "\345\256\242\346\210\267\347\256\241\347\220\206", Q_NULLPTR));
        WindowBaoBiao->setText(QApplication::translate("MeChatClass", "\346\212\245\350\241\250\347\256\241\347\220\206", Q_NULLPTR));
        WindowJiShiBen->setText(QApplication::translate("MeChatClass", "\350\256\260\344\272\213\346\234\254", Q_NULLPTR));
        WindowHelp->setText(QApplication::translate("MeChatClass", "\345\270\256\345\212\251\344\270\255\345\277\203", Q_NULLPTR));
        WindowMin->setText(QApplication::translate("MeChatClass", "...", Q_NULLPTR));
        WindowMax->setText(QString());
        WindowExit->setText(QApplication::translate("MeChatClass", "...", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MeChatClass", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MeChatClass: public Ui_MeChatClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MECHAT_H
