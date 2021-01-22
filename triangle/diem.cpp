#include "diem.h"
#include <iostream>
Diem::Diem()
{
	x = 0;
	y = 0;
}
Diem::Diem(float xx, float yy)
{
	x = xx;
	y = yy;
}
void Diem::set_x(float xx)
{
	x = xx;
}
void Diem::set_y(float yy)
{
	y = yy;
}
float Diem::get_x()
{
	return x;
}
float Diem::get_y()
{
	return y;
}
void Diem::nhap()
{
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
}
void Diem::xuat()
{
	cout << x << " " << y << endl;
}
Diem::~Diem(void)
{

}
void Diem::move(float xx, float yy)
{
	x = x + xx;
	y = y + yy;
}
void Diem::quay(float rad)
{
	
	x = x * cos(rad) + y * sin(rad);
	y = x * sin(rad) + y * cos(rad);
}
void Diem::thuphong(float k)
{
	x = x * k;
	y = y * k;
}
void Diem::setXY(float xx, float yy)
{
	x = xx;
	y = yy;
}