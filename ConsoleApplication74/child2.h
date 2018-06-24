#pragma once
#include "child.h"
#include <string>
#include <iostream>

using namespace std;

/* ����������� ����� �� ������ child*/
class child2 :
	public child
{
private:
	string color; // ���������� �����
public:
	child2();
	child2(string clr, string style, double w, double h) :child(style, w, h)
	{
		color = clr;			// ����������� � �������� �����������
		cout << "���������� ����������� ����� ������� child2" << endl;
	}
	void showColor();	    // ����������� �����
	virtual ~child2();
};

