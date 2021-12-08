#include<iostream>
using namespace std;

int main() {
	int klopanie = 0;
	int hranica = 3;

	while (klopanie < hranica) {
		cout << klopanie << "Klop!" << endl;

		klopanie++;
	}
	cout << "Penny!" << endl;
	return 0;
}