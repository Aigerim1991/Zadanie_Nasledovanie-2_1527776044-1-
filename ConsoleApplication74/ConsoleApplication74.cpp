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
	/* Задание 1. Используя механизм шаблонного наследования создайте иерархию классов.
	Базовый класс под названием base имеет следующие переменные-члены:
	1. T1 value1; // некоторое значение.
	2. T2 value2; // некоторое значение.
	Потомок под названием child содержит дополнительные переменные-члены:
	1. T3 value3.
	2. T4 value4.
	Потомок под названием child2 добавляет такие переменные-члены:
	1. T5 value5.
	2. T6 value6.
	Каждый класс имеет необходимый набор конструкторов, деструкторов, функций-членов
	для работы со структурой класса. В main протестировать работу класса.*/

	setlocale(LC_ALL, "rus");
	child2 T1("синий", "прямоугольный", 8.0, 12.0);
	child2 T2("красный", "равнобедренный", 8.0, 18.0);
	cout << endl;

	cout << "Информация об объекте T1: " << endl;
	T1.showStyle();
	T1.showDimention();
	T1.showColor();
	cout << "Площадь равна: " << T1.area() << endl;
	cout << endl;

	cout << "Информация об объекте T2: " << endl;
	T2.showStyle();
	T2.showDimention();
	T2.showColor();
	cout << "Площадь равна: " << T2.area() << endl;
	cout << endl;

	return 0;
}

