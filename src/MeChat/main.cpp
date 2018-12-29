#include "MeChat.h"
#include <QtWidgets/QApplication>
#include "MeChatApp.h"
#include <QDebug>
#include <iostream>
#include <QMessageBox>
#include <QFile>

using namespace std;

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	int QAppRet = 0;

	// ---------------------------------------
	// 读取配置文件
	// 1.读取服务器连接信息(IP/PORT)
	// 2.读取样式表文件
	// ---------------------------------------
	if (MeChatApp::App()->AppInit() == false)
	{
		// 错误提示

		return -1;
	}

	// ---------------------------------------
	// 载入样式文件
	// ---------------------------------------
	QFile StyleFile(MeChatApp::App()->GetAppDirectory() + MeChatApp::App()->STYLEFILENAME);
	if (StyleFile.open(QFile::ReadOnly))
	{
		QString StyleQString = QLatin1String(StyleFile.readAll());
		a.setStyleSheet(StyleQString);
		StyleFile.close();
	}

	// ---------------------------------------
	// 链接服务器
	// ---------------------------------------
	
	// ---------------------------------------
	// 载入登录窗口
	// ---------------------------------------

	// ---------------------------------------
	// 载入主窗口
	// ---------------------------------------
	MeChat w;
	w.show();
	QAppRet = a.exec();

	// ---------------------------------------
	// 断开服务器
	// ---------------------------------------


	return QAppRet;
}
