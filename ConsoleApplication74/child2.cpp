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
	cout << "����: " << color << endl;
}

child2::~child2()
{
	cout << "���������� ����������� ����� ������� child2" << endl;
}

