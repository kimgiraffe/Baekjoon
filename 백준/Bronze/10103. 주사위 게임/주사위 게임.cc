#include <iostream>

using namespace std;

int main(void)
{
	int n, a, b, S1 = 100, S2 = 100;
	cin >> n;

	while (n--) {
		cin >> a >> b;
		if (a < b) {
			S1 -= b;
		}
		else if (a > b) {
			S2 -= a;
		}
	}

	cout << S1 << '\n' << S2;

	return 0;
}