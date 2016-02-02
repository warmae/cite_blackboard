#ifndef CITE_BLACKBOARD_H
#define CITE_BLACKBOARD_H

#include <QtWidgets/QMainWindow>
#include "ui_cite_blackboard.h"

class cite_blackboard : public QMainWindow
{
	Q_OBJECT

public:
	cite_blackboard(QWidget *parent = 0);
	~cite_blackboard();

private:
	Ui::cite_blackboardClass ui;
};

#endif // CITE_BLACKBOARD_H
