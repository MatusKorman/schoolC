#include<iostream>
#include<string>
using namespace std;

int main() {
	
	string sprava ="Mount Everest";
	string samohlasky = "aeiouyAEIOUY";
	string spoluhlasky = "bcdfghjklmnpqrstvwxzBCDFGGJKLMNPQRSTVWXZ";
	string cisla = "0123456789";
	string znaky = " ";

	cout << "Povodna sprava: " << sprava << endl;
	int pocitadlosamohlasky = 0;

	for (int i = 0; i < sprava.length(); i++) {

		if (samohlasky.find(sprava[i]) < samohlasky.length()) {
			pocitadlosamohlasky++;
		}
	}
	cout << "Pocet samohlasok: " << pocitadlosamohlasky << endl;
	
	int pocitadlospoluhlasky = 0;

	for (int j = 0; j < sprava.length(); j++) {

		if (spoluhlasky.find(sprava[j]) < spoluhlasky.length()) {
			pocitadlospoluhlasky++;
		}
	}
	cout << "Pocet spoluhlasok: " << pocitadlospoluhlasky << endl;

	int pocitadlocisla = 0;
	
	for (int k = 0; k < sprava.length(); k++) {

		if (cisla.find(sprava[k]) < cisla.length()) {
			pocitadlocisla++;
		}
	}
	cout << "Pocet cisiel: " << pocitadlocisla << endl;

	int pocitadloznaky = 0;

	for (int l = 0; l < sprava.length(); l++) {

		if (znaky.find(sprava[l]) < znaky.length()) {
			pocitadloznaky++;
		}
	}
	cout << "Pocet znakov: " << pocitadloznaky << endl;


	return 0;
}