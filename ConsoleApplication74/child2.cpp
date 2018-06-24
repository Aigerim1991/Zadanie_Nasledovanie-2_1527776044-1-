#include "stdafx.h"
#include "child2.h"
#include <iostream>
#include <string>

using namespace std;

child2::child2()
{
}


void child2::showColor()
{
	cout << "Цвет: " << color << endl;
}

child2::~child2()
{
	cout << "Разрушение производной части объекта child2" << endl;
}

