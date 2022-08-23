#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	int a[3];
	for (int i = 0; i < 3; ++i) {
		cin >> a[i];
	}

	sort(a, a + 3);

	if (a[2] - a[1] == a[1] - a[0]) {
		cout << 2 * a[2] - a[1];
	}
	else if (a[2] - a[1] > a[1] - a[0]) {
		cout << 2 * a[1] - a[0];
	}
	else {
		cout << (a[1] + a[0]) / 2;
	}

	return 0;
}