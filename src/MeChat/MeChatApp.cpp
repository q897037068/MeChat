#include "MeChatApp.h"
#include <Windows.h>


MeChatApp::MeChatApp()
{
}


MeChatApp::~MeChatApp()
{
}

bool MeChatApp::AppInit(QString QFileName)
{
	QSettings AppSetting(MeChatApp::App()->GetAppDirectory() + QFileName, QSettings::IniFormat);
	
	// ----------------------------------------------
	// 读取服务器配置文件
	//
	{
	if (AppSetting.contains(QStringLiteral("SOCKET/IP")) == false)
		return false;
	else
		SOCKETIP = AppSetting.value(QStringLiteral("SOCKET/IP")).toString();
	
	if (AppSetting.contains(QStringLiteral("SOCKET/PORT")) == false)
		return false;
	else
		SOCKETPORT = AppSetting.value(QStringLiteral("SOCKET/PORT")).toInt();
	}
	// ----------------------------------------------

	
	// ----------------------------------------------
	// 读取设置的默认样式表文件
	//
	if (AppSetting.contains(QStringLiteral("STYLE/FILENAME")) == false)
		return false;
	else
		STYLEFILENAME = AppSetting.value(QStringLiteral("STYLE/FILENAME")).toString();
	// ----------------------------------------------



	return true;
}

QString MeChatApp::GetAppDirectory()
{
	static QString	AppDirectory		 = "";
	static bool		bGet				 = false;
	char			szFileName[MAX_PATH] = { 0 };

	if (bGet == false)
	{
		::GetModuleFileNameA(NULL, szFileName, MAX_PATH);
		if (::strlen(szFileName) > 0)
		{
			char * lpszFile = ::strrchr(szFileName, '\\');
			if ( lpszFile != NULL)
			{
				int TSize = lpszFile - szFileName;
				szFileName[TSize + 1] = '\0';
				AppDirectory = QString::fromLocal8Bit(szFileName);
			}
		}

		bGet = !bGet;
	}

	return AppDirectory;
}


