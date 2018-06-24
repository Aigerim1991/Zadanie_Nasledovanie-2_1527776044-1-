#pragma once
#include "child.h"
#include <string>
#include <iostream>

using namespace std;

/* производный класс от класса child*/
class child2 :
	public child
{
private:
	string color; // добавление цвета
public:
	child2();
	child2(string clr, string style, double w, double h) :child(style, w, h)
	{
		color = clr;			// конструктор с четырьмя параметрами
		cout << "Построение производной части объекта child2" << endl;
	}
	void showColor();	    // отображение цвета
	virtual ~child2();
};

