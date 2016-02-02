#include "cite_blackboard.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MainWindow window;
	window.setApplication(&a);
	window.show();
	
	return a.exec();
}
