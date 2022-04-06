#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	int a, b, c;
	while (true) {
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0)
			break;

		int SUM = a + b + c;
		int MAX = max(max(a, b), c);

		if (MAX >= SUM - MAX) {
			cout << "Invalid" << '\n';
		}
		else if (a == b && a == c) {
			cout << "Equilateral" << '\n';
		}
		else if (a != b && b != c && a != c) {
			cout << "Scalene" << '\n';
		}
		else cout << "Isosceles" << '\n';
	}

	return 0;
}