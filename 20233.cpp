#include <iostream>

using namespace std;

int main(void)
{
	int a, x, b, y, T;
	cin >> a >> x >> b >> y >> T;
	if (T < 30) {
		cout << a << ' ';
	}
	else {
		cout << 21 * (T - 30) * x + a << ' ';
	}
	if (T < 45) {
		cout << b;
	}
	else {
		cout << 21 * (T - 45) * y + b;
	}

	return 0;
}