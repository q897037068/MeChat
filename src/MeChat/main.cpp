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
	// ��ȡ�����ļ�
	// 1.��ȡ������������Ϣ(IP/PORT)
	// 2.��ȡ��ʽ���ļ�
	// ---------------------------------------
	if (MeChatApp::App()->AppInit() == false)
	{
		// ������ʾ

		return -1;
	}

	// ---------------------------------------
	// ������ʽ�ļ�
	// ---------------------------------------
	QFile StyleFile(MeChatApp::App()->GetAppDirectory() + MeChatApp::App()->STYLEFILENAME);
	if (StyleFile.open(QFile::ReadOnly))
	{
		QString StyleQString = QLatin1String(StyleFile.readAll());
		a.setStyleSheet(StyleQString);
		StyleFile.close();
	}

	// ---------------------------------------
	// ���ӷ�����
	// ---------------------------------------
	
	// ---------------------------------------
	// �����¼����
	// ---------------------------------------

	// ---------------------------------------
	// ����������
	// ---------------------------------------
	MeChat w;
	w.show();
	QAppRet = a.exec();

	// ---------------------------------------
	// �Ͽ�������
	// ---------------------------------------


	return QAppRet;
}
