#include <iostream>

using namespace std;

int main(void)
{
	int A, B, C;
	cin >> A >> B >> C;
	if (A == 1) {
		if (B == 1) {
			if (C == 1) {
				cout << "*";
			}
			else {
				cout << "C";
			}
		}
		else {
			if (C == 1) {
				cout << "B";
			}
			else {
				cout << "A";
			}
		}
	}
	else {
		if (B == 1) {
			if (C == 1) {
				cout << "A";
			}
			else {
				cout << "B";
			}
		}
		else {
			if (C == 1) {
				cout << "C";
			}
			else {
				cout << "*";
			}
		}
	}

	return 0;
}