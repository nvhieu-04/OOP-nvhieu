#pragma once

#include <iostream>
using namespace std;
class Diem
{
private:
	float x;
	float y;
public:
	Diem();
	Diem(float xx, float yy);
	Diem(const Diem& d);
	void set_x(float xx);
	void set_y(float yy);
	float get_x();
	float get_y();
	void nhap();
	void xuat();
	void move(float xx, float yy);
	~Diem();
	void quay(float);
	void thuphong(float k);
	void setXY(float xx, float yy);

};