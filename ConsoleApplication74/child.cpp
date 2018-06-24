#include "stdafx.h"
#include "child.h"
#include <iostream>
#include <string>

using namespace std;

child::child()
{
	style = "неизвестный";
}


double child::area()
{
	return getWidth()*getHeigth() / 2;
}

void child::showStyle()
{
	cout << "Это " << style << " треугольник" << endl;
}

child::~child()
{
	cout << "Разрушение производной части объекта child" << endl;
}

