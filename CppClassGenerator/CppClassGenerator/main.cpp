#include "stdafx.h"
#include "CppClassGenerator.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	CppClassGenerator w;
	w.show();
	return a.exec();
}
