#include <iostream>

using namespace std;

int main(void)
{
	int m, d;
	cin >> m >> d;

	if (m == 2 && d == 18) {
		cout << "Special";
	}
	else if (m < 2) {
		cout << "Before";
	}
	else if (m > 2) {
		cout << "After";
	}
	else if (m == 2 && d < 18) {
		cout << "Before";
	}
	else if (m == 2 && d > 18) {
		cout << "After";
	}

	return 0;
}