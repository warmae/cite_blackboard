#include "head_header.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	member_list * list;
	//MainWindow window;
	cite_blackboard w;
	//w.setApplication(&a);
	w.show();
	
	return a.exec();
}
