#include "MeChat.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MeChat w;
	w.show();
	return a.exec();
}
