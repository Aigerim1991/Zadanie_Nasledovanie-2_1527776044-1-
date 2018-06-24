#pragma once

/* базовый класс, описывающий некоторые двумерные объекты*/
class base
{
private:
	double width;  // ширина объекта
	double height; // высота объекта

public:
	base();
	base(double w, double h); // перегруженный конструктор 
	void showDimention();     // вывод размеров

							  /* функции доступа к членам класса */
	double getWidth();
	double getHeigth();
	void setWidht(double w);
	void setHeigth(double h);

	virtual ~base();
};


