#include<iostream>
using namespace std;

int main() {
	string pismeno;
	int vysledok;
	cout << "KVIZ" << endl;

	cout << "(zadavaj velke pismena)" << endl;
	cout << "1. otazka:" << endl;
	cout << "V ktorom roku sa narodil Tomas Tatar?" << endl;
	cout << "A: 1990" << endl;
	cout << "B: 1975" << endl;
	cout << "C: 1991" << endl;
	cout << "D: 1989" << endl;

	cin >> pismeno;
	if (pismeno == "A") {
		vysledok = 1;
	}
	else if (pismeno == "B") {
		vysledok = 2;
	}
	else if (pismeno == "C") {
		vysledok = 3;
	}
	else if (pismeno == "D") {
		vysledok = 4;
	}

	switch (vysledok) {
	case 1:
		cout << "Spravna odpoved." << endl;
		break;
	case 2:
		cout << "Zla odpoved." << endl;
		break;
	case 3:
		cout << "Zla odpoved." << endl;
		break;
	case 4:
		cout << "Zla odpoved." << endl;
		break;
	default:
		cout << "Taku odpoved nepoznam." << endl;
		break;
	}

	cout << "2. otazka:" << endl;
	cout << "V ktorom roku sa narodil Zdeno Chara?" << endl;
	cout << "A: 1975" << endl;
	cout << "B: 1977" << endl;
	cout << "C: 1980" << endl;
	cout << "D: 1973" << endl;

	cin >> pismeno;
	if (pismeno == "A") {
		vysledok = 1;
	}
	else if (pismeno == "B") {
		vysledok = 2;
	}
	else if (pismeno == "C") {
		vysledok = 3;
	}
	else if (pismeno == "D") {
		vysledok = 4;
	}

	switch (vysledok) {
	case 1:
		cout << "Zla odpoved." << endl;
		break;
	case 2:
		cout << "Spravna odpoved." << endl;
		break;
	case 3:
		cout << "Zla odpoved." << endl;
		break;
	case 4:
		cout << "Zla odpoved." << endl;
		break;
	default:
		cout << "Taku odpoved nepoznam." << endl;
		break;
	}

	cout << "3. otazka:" << endl;
	cout << "V ktorom roku sa narodil Andrej Sekera?" << endl;
	cout << "A: 1988" << endl;
	cout << "B: 1990" << endl;
	cout << "C: 1980" << endl;
	cout << "D: 1986" << endl;
	cin >> pismeno;

	if (pismeno == "A") {
		vysledok = 1;
	}
	else if (pismeno == "B") {
		vysledok = 2;
	}
	else if (pismeno == "C") {
		vysledok = 3;
	}
	else if (pismeno == "D") {
		vysledok = 4;
	}

	switch (vysledok) {
	case 1:
		cout << "Zla odpoved." << endl;
		break;
	case 2:
		cout << "Zla odpoved." << endl;
		break;
	case 3:
		cout << "Zla odpoved." << endl;
		break;
	case 4:
		cout << "Spravna odpoved." << endl;
		break;
	default:
		cout << "Taku odpoved nepoznam." << endl;
		break;
	}

	return 0;
 }