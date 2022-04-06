#include <iostream>

using namespace std;

int main(void)
{
	int d, h, m;
	cin >> d >> h >> m;

	int T = 0;
	T += d * 1440 + h * 60 + m;
	T -= 11 * 1440 + 11 * 60 + 11;

	if (T < 0) {
		cout << -1;
	}
	else {
		cout << T;
	}
	return 0;
}