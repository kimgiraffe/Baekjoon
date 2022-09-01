#include <iostream>

using namespace std;

int main(void)
{
	int a, b, c;
	while (true) {
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0) {
			break;
		}
		if (a + c == 2 * b) {
			cout << "AP " << b + c - a << '\n';
		}
		else if (a * c == b * b) {
			cout << "GP " << b * c / a << '\n';
		}
	}

	return 0;
}