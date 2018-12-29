#ifndef MECHAT_H_
#define MECHAT_H_
#include <QtWidgets/QWidget>
#include "ui_MeChat.h"
#include <QMouseEvent>

class MeChat : public QWidget
{
	Q_OBJECT

public:
	MeChat(QWidget *parent = Q_NULLPTR);


	virtual void mousePressEvent(QMouseEvent * e);
	virtual void mouseMoveEvent(QMouseEvent * e);
	virtual void mouseReleaseEvent(QMouseEvent * e);

private:
	QPoint MousePoint;
	bool   bMouse;
	Ui::MeChatClass ui;
};
#endif