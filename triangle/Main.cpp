#include "iostream"
#include "TamGiac.h"
using namespace std;
int main()
{
	tamgiac a;
	float x, y,rad, k;
	a.nhap();
	a.xuat();
	cout << "Tinh tien: " << endl;
	cout << "Nhap x: " << endl;
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
	a.tinhtien(x, y);
	a.xuat();
	cout << "Nhap rad: " << endl;
	cin >> rad;
	a.quay(rad);
	a.xuat();
	cout << "Nhap k: " << endl;
	cin >> k;
	a.thuphong(k);
	a.xuat();
	return 0;
}