#include "TamGiac.h"
#include "diem.h"
#include "iostream"
using namespace std;

tamgiac::tamgiac()
{
	

}
tamgiac::tamgiac(Diem x, Diem y, Diem z)
{
	A = x;
	B = y;
	C = z;
}
tamgiac::~tamgiac()
{

}
void tamgiac::nhap()
{
	cout << "Nhap toa do dinh A: " << endl;
	A.nhap();
	cout << "Nhap toa do dinh B: " << endl;
	B.nhap();
	cout << "Nhap toa do dinh C: " << endl;
	C.nhap();
}
void tamgiac::xuat()
{
	A.xuat();
	B.xuat();
	C.xuat();
}
void tamgiac::tinhtien(float a, float b)
{
	A.move(a, b);
	B.move(a, b);
	C.move(a, b);
}
void tamgiac::quay(float rad)
{
	A.quay(rad);
	B.quay(rad);
	C.quay(rad);
}
void tamgiac::thuphong(float k)
{
	A.setXY(A.get_x() * k, A.get_y() * k);
	B.setXY(B.get_x() * k, B.get_y() * k);
	C.setXY(C.get_x() * k, C.get_y() * k);
}