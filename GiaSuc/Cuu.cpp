#include "Cuu.h"
#include <time.h>
#include <cstdlib>
#include <iostream>
using namespace std;
Cuu::Cuu()
{
}

Cuu::~Cuu()
{
}

int Cuu::SinhCon()
{
	srand((unsigned)time(NULL));
	return rand() % 100;
}

int Cuu::ChoSua()
{
	srand((unsigned)time(NULL));
	return rand() % 5;
}

void Cuu::Keu()
{
	cout << "Cuu" << endl;
}
