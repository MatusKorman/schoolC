#include<iostream>
using namespace std;

int main() {
	int cislo;
	cout << "Zadaj zaporne cislo:" << endl;
	cin >> cislo;
	if (cislo < 0) {

		while (cislo < 0) {
			cout << cislo << endl;
			cislo;
			++cislo;
		}
	}
	else {
		cout << "Zadal si kladne cislo chod odznovu." << endl;
	}

	return 0;
}