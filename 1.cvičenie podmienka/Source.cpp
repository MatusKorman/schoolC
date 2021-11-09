#include<iostream>
using namespace std;

int main()
{
	cout << "Zadaj svoj vek:" << endl;
	int vek;
	cin >> vek;

	if (vek < 18) {
		cout << "Si neplnolety." << endl;
	}
	else {
		cout << "Si plnolety" << endl;
	}
	return 0;
}