#include "De.h"
#include <time.h>
#include <cstdlib>
#include <iostream>
using namespace std;

De::De()
{
}

De::~De()
{
}

int De::SinhCon()
{
	srand((unsigned)time(NULL));
	return rand() % 100;
}

int De::ChoSua()
{
	srand((unsigned)time(NULL));
	return rand() % 10;
}

void De::Keu()
{
	cout << "De" << endl;
}
