#pragma once

/* ������� �����, ����������� ��������� ��������� �������*/
class base
{
private:
	double width;  // ������ �������
	double height; // ������ �������

public:
	base();
	base(double w, double h); // ������������� ����������� 
	void showDimention();     // ����� ��������

							  /* ������� ������� � ������ ������ */
	double getWidth();
	double getHeigth();
	void setWidht(double w);
	void setHeigth(double h);

	virtual ~base();
};


