#include "MeChat.h"


MeChat::MeChat(QWidget *parent) : QWidget(parent)
{
	ui.setupUi(this);
	setWindowFlag(Qt::FramelessWindowHint);
}

void MeChat::mousePressEvent(QMouseEvent * e)
{
	if (e->button() == Qt::LeftButton)
	{
		bMouse = true;
		MousePoint = e->pos();
	}
}

void MeChat::mouseMoveEvent(QMouseEvent * e)
{
	if (bMouse)
	{
		move(e->pos() - MousePoint + pos());
	}
}

void MeChat::mouseReleaseEvent(QMouseEvent * e)
{
	if (e->button() == Qt::LeftButton)
	{
		bMouse = false;
	}
}
