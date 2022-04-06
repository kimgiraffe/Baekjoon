#include <iostream>
#include <algorithm>

using namespace std;

int T;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> T;

	cout.setf(ios::showpoint);
	cout << fixed;
	cout.precision(6);

	while (T--) {
		double h, m, s;
		cin >> h >> m >> s;

		double a, b, c;
		a = 30 * h + m * ((double)1 / 2) + s * ((double)1 / 120);
		b = m * (6) + s * ((double)1 / 10);
		c = s * 6;

		double aa = 360 - a, bb = 360 - b, cc = 360 - c;
		cout << min({ min({abs(a - b),abs(aa + b),abs(a + bb)}), min({ abs(a - c),abs(aa + c),abs(a + cc)}), min({ abs(b - c),abs(b + cc),abs(bb + c) }) }) << "\n";
	}
}