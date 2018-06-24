#pragma once
#include "base.h"
#include <string>
#include <iostream>

using namespace std;

/* ����������� ����� �� ������ base */
class child :
	public base
{
private:
	string style;
public:
	child();										 // ����������� �� ���������
	child(string str, double w, double h) :base(w, h) // ����������� � ����� �����������
	{
		style = str;
		cout << "���������� ����������� ����� ������� child" << endl;
	}
	double area();		// ���������� �������
	void showStyle();   // ��� ������������
	virtual ~child();
};
