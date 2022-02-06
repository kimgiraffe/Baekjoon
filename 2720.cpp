#include <iostream>

using namespace std;

int main(void)
{
	int T, C;
	int q, d, n, p;
	cin >> T;

	while (T--) {
		cin >> C;
		q = C / 25;
		d = (C - q * 25) / 10;
		n = (C - q * 25 - d * 10) / 5;
		p = (C - q * 25 - d * 10 - n * 5) / 1;

		cout << q << " " << d << " " << n << " " << p << '\n';
	}

	return 0;
}