#include <iostream>

using namespace std;

int main(void)
{
	int T, s, n, q, p;
	cin >> T;
	while (T--) {
		int sum = 0;
		cin >> s;
		sum += s;
		cin >> n;
		while (n--) {
			cin >> q >> p;
			sum += q * p;
		}
		cout << sum << '\n';
	}

	return 0;
}