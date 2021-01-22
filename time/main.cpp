#include <iostream>
#include "time.h"
using namespace std;
int main()
{
	ThoiGian a;
	cin >> a;
	cout << a << endl;
	++a;
	cout << a;
	--a;
	--a;
	cout << a;
	return 0;
}