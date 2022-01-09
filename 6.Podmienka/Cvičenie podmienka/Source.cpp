#include <iostream>
using namespace std;

int main() {
	const string okgoogle = "okgoogle";
	const string heysiri = "heysiri";

	int hlas;
	
	cout << "Zadaj jedno zo slovicok (okgoogle, heysiri) a zadaj hlasitost od 0 - 100:" << endl;

	string prikaz;
	cin >> prikaz;
	cin >> hlas;

	if (prikaz == okgoogle || prikaz == heysiri) {
		cout << "Zadal si spravny prikaz" << endl;
	}
	else {
		cout << "chybny prikaz" << endl;
	}
	if (hlas <= 100) {
		cout << "Zvysujem hlasitost na " << hlas << endl;
	}
	else {
		cout << "Chybny prikaz" << endl;
	}
	return 0;


}