#include <iostream>

using namespace std;

int main(void)
{
	int a[3], b[3], sumA = 0, sumB = 0;
	for (int i = 0; i < 3; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < 3; i++) {
		cin >> b[i];
	}
	sumA = a[0] * 3 + a[1] * 2 + a[2];
	sumB = b[0] * 3 + b[1] * 2 + b[2];

	if (sumA > sumB) {
		cout << "A\n";
	}
	else if (sumA < sumB) {
		cout << "B\n";
	}
	else {
		cout << "T\n";
	}


	return 0;
}