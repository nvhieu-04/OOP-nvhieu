#pragma once
#include "diem.h"
class tamgiac
{
private:
	Diem A;
	Diem B;
	Diem C;
public:
	tamgiac();
	tamgiac(Diem x, Diem y , Diem z );
	~tamgiac();
	void nhap();
	void xuat();
	void tinhtien(float, float);
	void quay(float);
	void thuphong(float);

};