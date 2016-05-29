//main.cpp by Kostya Kozachuck as neurocod - 2016.05.22 13:46:42
#include "pch.h"
#include "MainWindow.h"
#include "Tests.h"

int main(int argc, char *argv[]) {
	QApplication a(argc, argv);
	Tests::testAll();
	MainWindow w;
	w.showMaximized();
	return a.exec();
}
