#include "Bo.h"
#include <time.h>
#include <cstdlib>
#include <iostream>
using namespace std;

Bo::Bo()
{
}

Bo::~Bo()
{
}

int Bo::SinhCon()
{
	srand((unsigned)time(NULL));
	return rand() % 100;
}

int Bo::ChoSua()
{
	srand((unsigned)time(NULL));
	return rand() % 20;
}

void Bo::Keu()
{
	cout << "Bo" << endl;
}
