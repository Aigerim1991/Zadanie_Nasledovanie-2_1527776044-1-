#pragma once
#include "base.h"
#include <string>
#include <iostream>

using namespace std;

/* производный класс от класса base */
class child :
	public base
{
private:
	string style;
public:
	child();										 // конструктор по умолчанию
	child(string str, double w, double h) :base(w, h) // конструктор с трем€ параметрами
	{
		style = str;
		cout << "ѕостроение производной части объекта child" << endl;
	}
	double area();		// вычисление площади
	void showStyle();   // вид треугольника
	virtual ~child();
};
