#include "stdafx.h"
#include <iostream>
#include "base.h"

using namespace std;

base::base()
{
	width = height = 0;

}

base::base(double w, double h)
{
	width = w;
	height = h;
	cout << "���������� ������� ����� �������" << endl;
}

void base::showDimention()
{
	cout << "������: " << width << endl;
	cout << "������: " << height << endl;
}

double base::getWidth()
{
	return width;
}

double base::getHeigth()
{
	return height;
}

void base::setWidht(double w)
{
	width = w;
}

void base::setHeigth(double h)
{
	height = h;
}

base::~base()
{
	cout << "���������� ������� ����� �������" << endl;
}


