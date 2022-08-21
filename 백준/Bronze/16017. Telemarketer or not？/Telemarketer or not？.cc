#include <iostream>

using namespace std;

int main(void)
{
	int a[4];
	for (int i = 0; i < 4; i++) {
		cin >> a[i];
	}

	if (a[0] != 9 && a[0] != 8) {
		cout << "answer";
	}
	else if (a[1] != a[2]) {
		cout << "answer";
	}
	else if (a[3] != 9 && a[3] != 8) {
		cout << "answer";
	}
	else {
		cout << "ignore";
	}

	return 0;
}