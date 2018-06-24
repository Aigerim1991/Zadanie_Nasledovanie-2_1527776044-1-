// ConsoleApplication74.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "base.h"
#include "child.h"
#include "child2.h"
#include <iostream>
#include <string>
#include <clocale>

using namespace std;

int main()
{
	/* ������� 1. ��������� �������� ���������� ������������ �������� �������� �������.
	������� ����� ��� ��������� base ����� ��������� ����������-�����:
	1. T1 value1; // ��������� ��������.
	2. T2 value2; // ��������� ��������.
	������� ��� ��������� child �������� �������������� ����������-�����:
	1. T3 value3.
	2. T4 value4.
	������� ��� ��������� child2 ��������� ����� ����������-�����:
	1. T5 value5.
	2. T6 value6.
	������ ����� ����� ����������� ����� �������������, ������������, �������-������
	��� ������ �� ���������� ������. � main �������������� ������ ������.*/

	setlocale(LC_ALL, "rus");
	child2 T1("�����", "�������������", 8.0, 12.0);
	child2 T2("�������", "��������������", 8.0, 18.0);
	cout << endl;

	cout << "���������� �� ������� T1: " << endl;
	T1.showStyle();
	T1.showDimention();
	T1.showColor();
	cout << "������� �����: " << T1.area() << endl;
	cout << endl;

	cout << "���������� �� ������� T2: " << endl;
	T2.showStyle();
	T2.showDimention();
	T2.showColor();
	cout << "������� �����: " << T2.area() << endl;
	cout << endl;

	return 0;
}

