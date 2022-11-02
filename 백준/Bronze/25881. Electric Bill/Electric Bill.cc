#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int f, a, n;
	cin >> f >> a >> n;

	while (n--) {
		int e, c = 0;
		cin >> e;
		if (e > 1000) {
			c += 1000 * f;
			c += (e - 1000) * a;
		}
		else {
			c += e * f;
		}
		cout << e << ' ' << c << '\n';
	}

	return 0;
}