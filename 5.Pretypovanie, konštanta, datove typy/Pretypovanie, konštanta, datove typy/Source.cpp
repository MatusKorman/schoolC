#include<iostream>
using namespace std;

int main()
{
	int a = 16;
	cout << "Hodnota a po pretypovani " << (char)a << endl;
	float d = 16.1;
	const double PI = 3.14;
	float r;
	r = d / 2;
	float O;
	cout << "Obvod kruhu je " << (O = 2 * PI * r) << endl;
	
	return 0;
}