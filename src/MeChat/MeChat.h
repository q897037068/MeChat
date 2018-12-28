#ifndef MECHAT_H_
#define MECHAT_H_
#include <QtWidgets/QWidget>
#include "ui_MeChat.h"

class MeChat : public QWidget
{
	Q_OBJECT

public:
	MeChat(QWidget *parent = Q_NULLPTR);

private:
	Ui::MeChatClass ui;
};
#endif