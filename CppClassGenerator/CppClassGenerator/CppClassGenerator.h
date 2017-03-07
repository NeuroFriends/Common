#ifndef CPPCLASSGENERATOR_H
#define CPPCLASSGENERATOR_H

#include <QtWidgets/QWidget>
#include "ui_CppClassGenerator.h"

class CppClassGenerator : public QWidget
{
	Q_OBJECT

public:
	CppClassGenerator(QWidget *parent = 0);
	~CppClassGenerator();

private:
	Ui::CppClassGeneratorClass ui;
};

#endif // CPPCLASSGENERATOR_H
