#include<iostream>
using namespace std;

int main()
{
	float vyska;
	float vaha;
	float BMI;
	cout << "Zadaj vysku (v metroch):" << endl;
	cin >> vyska;
	cout << "Zadaj vahu (v kilogramoch):" << endl;
	cin >> vaha;
	BMI = vaha / (vyska * vyska);

	if (BMI >= 18.5 && BMI <= 24.99) {
		cout << "Normalna hmotnost." << endl;
	}
	else if (BMI >= 25) {
		cout << "Nadvaha." << endl;
	}
	else if (BMI < 18.5) {
		cout << "Podvyziva." << endl;
	}
	return 0;
}