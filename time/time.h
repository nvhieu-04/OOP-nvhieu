#pragma once
using namespace std;
#include <iostream>
class ThoiGian
{
private:
    int Gio;
    int Phut;
    int Giay;
public:
    friend istream& operator>>(istream& is, ThoiGian& t);
    friend ostream& operator<<(ostream& os, ThoiGian& t);
    ThoiGian();
    ThoiGian operator++();
    ThoiGian operator--();
};