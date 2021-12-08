#include<iostream>
using namespace std;

int main() {
	int x;
	int y;
	cout << "Zadaj x:" << endl;
	cin >> x;
	cout << "Zadaj y:" << endl;
	cin >> y;

	while (x < y) {
		cout << x << endl;
		x;
		x++;
		++x;
	}
	return 0;
}