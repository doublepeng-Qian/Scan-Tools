#pragma once

#include <QtWidgets/QWidget>
#include "ui_scantools.h"

class scantools : public QWidget
{
	Q_OBJECT

public:
	scantools(QWidget *parent = Q_NULLPTR);

private:
	Ui::scantoolsClass ui;
};
