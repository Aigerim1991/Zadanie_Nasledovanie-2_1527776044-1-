#include "stdafx.h"
#include "child.h"
#include <iostream>
#include <string>

using namespace std;

child::child()
{
	style = "�����������";
}


double child::area()
{
	return getWidth()*getHeigth() / 2;
}

void child::showStyle()
{
	cout << "��� " << style << " �����������" << endl;
}

child::~child()
{
	cout << "���������� ����������� ����� ������� child" << endl;
}

