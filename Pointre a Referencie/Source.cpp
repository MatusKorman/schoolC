#include<iostream>
using namespace std;


void swap(int *a, int *b) {
	int c = *a;
	*a = *b;
	*b = c;
}

void napln_pole(int pole[], int dlzka) {
	for (int i = 0; i < dlzka; i++) {
		pole[i] = i + 1;
	}
}



int main() {
	int a = 56;
	cout << "Premenna a ma hodnotu: " << a << " a je v pameti ulozena na adrese " << &a << endl;


	int b = 99;
	int* p_b = &b;
	*p_b = 15;

	cout << "Ukazovatel p_b ma hodnotu " << p_b << " a ukatuej na hodnotu " << *p_b << endl;
	cout << "Hodnota ulozena v b je " << b << endl;


	int c1 = 10;
	int c2 = 20;
	swap(&c1, &c2);
	cout << "V cislo1 je cislo " << c1 << " a v cislo2 je cislo " << c2 << endl;

	int cisla[10];
	napln_pole(cisla, 10);
	cout << cisla[5] << endl;

	int pole[10];
	int* p_pole = pole;
	cout << &pole;
	cout << p_pole;

	*p_pole = NULL;
	*pole = NULL;



	return 0;
}