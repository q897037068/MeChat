#ifndef MECHATAPP_H_
#define MECHATAPP_H_
#include <QString>
#include <QSettings>


/*
	
	�˴��޸Ļ�����Ϣ
	
*/
#define Ӧ�ó��������ļ� "App.ini"





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
	bool    AppInit(QString QFileName = QStringLiteral(Ӧ�ó��������ļ�));
	QString GetAppDirectory();
	

	QString SOCKETIP;		// ��������ַ
	int		SOCKETPORT;		// �������˿�
	QString STYLEFILENAME;	// ��ʽ�ļ�����





};
#endif

