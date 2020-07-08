#include "QWDlagManual.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QWDlagManual w;
	w.show();
	return a.exec();
}
