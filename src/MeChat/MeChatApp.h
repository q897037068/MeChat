#ifndef MECHATAPP_H_
#define MECHATAPP_H_
#include <QString>
#include <QSettings>


/*
	
	此处修改基本信息
	
*/
#define 应用程序配置文件 "App.ini"





class MeChatApp
{
public:
	MeChatApp();
	~MeChatApp();

	static MeChatApp* App()
	{
		static MeChatApp A;
		return &A;
	}

public:
	bool    AppInit(QString QFileName = QStringLiteral(应用程序配置文件));
	QString GetAppDirectory();
	

	QString SOCKETIP;		// 服务器地址
	int		SOCKETPORT;		// 服务器端口
	QString STYLEFILENAME;	// 样式文件名称





};
#endif

