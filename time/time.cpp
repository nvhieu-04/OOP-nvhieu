#include "time.h"
#include <iostream>
using namespace std;
ThoiGian::ThoiGian()
{
	Gio = 0;
	Phut = 0;
	Giay = 0;
}
istream& operator>>(istream& is, ThoiGian& t)
{
	do
	{
		cout << "Nhap gio: ";
		is >> t.Gio;
		if (t.Gio < 0 || t.Gio > 24)
		{
			cout << "Nhap sai rui anh/chi oi!" << endl;
		}
	} while (t.Gio < 0 || t.Gio > 24);
	do
	{
		cout << "Nhap phut: ";
		is >> t.Phut;
		if (t.Phut < 0 || t.Phut > 60)
		{
			cout << "Nhap sai rui anh/chi oi!" << endl;
		}
	} while (t.Phut < 0 || t.Phut > 60);
	do
	{
		cout << "Nhap giay: ";
		is >> t.Giay;
		if (t.Giay < 0 || t.Giay > 60)
		{
			cout << "Nhap sai rui anh/chi oi!" << endl;
		}
	} while (t.Giay < 0 || t.Giay > 60);
	return is;
}
ostream& operator<<(ostream& os, ThoiGian& t)
{
	os << t.Gio << ":" << t.Phut << ":" << t.Giay << endl;
	return os;
}
ThoiGian ThoiGian::operator++()
{
	
	Giay = Giay + 1;
	if (Giay >= 60)
	{
		Phut = Phut + 1;
		Giay = 0;
		if (Phut >= 60)
		{
			
			Phut = Phut - 60;
			Gio = Gio + 1;
			if (Gio >= 24)
			{
				Gio = Gio - 24;
			}
		}
	}
	return *this;
}
ThoiGian ThoiGian::operator--()
{
	Giay = Giay - 1;
	if (Giay <= -1)
	{
		Phut = Phut - 1;
		Giay = 59;
		if (Phut <= -1)
		{
			Gio = Gio - 1;
			Phut = 59;
			if (Gio <= -1)
			{
				Gio = Gio + 24;
			}
		}
	}
	return *this;
}