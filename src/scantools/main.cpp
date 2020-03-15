#include "scantools.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	scantools w;
	w.show();
	return a.exec();
}
