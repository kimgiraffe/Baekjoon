#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	int cnt = 1;
	while (true) {
		double a, b, c;
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0)
			break;
		if (a == -1) {
			if (c <= b) {
				cout << "Triangle #" << cnt << '\n' << "Impossible." << '\n' << '\n';
			}
			else {
				cout << fixed;
				cout.precision(3);
				cout << "Triangle #" << cnt << '\n' << "a = " << sqrt(c * c - b * b) << '\n' << '\n';
			}
		}
		if (b == -1) {
			if (c <= a) {
				cout << "Triangle #" << cnt << '\n' << "Impossible." << '\n' << '\n';
			}
			else {
				cout << fixed;
				cout.precision(3);
				cout << "Triangle #" << cnt << '\n' << "b = " << sqrt(c * c - a * a) << '\n' << '\n';
			}
		}
		if (c == -1) {
			cout << fixed;
			cout.precision(3);
			cout << "Triangle #" << cnt << '\n' << "c = " << sqrt(a * a + b * b) << '\n' << '\n';
		}

		cnt++;
	}

	return 0;
}