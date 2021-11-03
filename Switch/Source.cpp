#include<iostream>
using namespace std;

int main() {
	cout << "Zadaj jedno zo slov jablko, mec, hudba:" << endl;
	string slovo;
	int cislo;

	cin >> slovo;
	if (slovo == "jablko") {
		cislo = 1;
	}
	else
		if (slovo == "mec") {
			cislo = 2;
		}
		else
			if (slovo == "hudba") {
				cislo = 3;
			}

	switch (cislo) {
	case 1:
		cout << "Som hladny." << endl;
		break;
	case 2:
		cout << "Do zbrane." << endl;
		break;
	case 3:
		cout << "Nananananaaaa." << endl;
	default:
		cout << "Toto slovo nepoznam." << endl;
	}

	return 0;
}
