#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int i, T, n, sum = 0;
	cin >> T;
	for (i = 1; i <= T; i++) {
		cin >> n;
		sum += n;
	}
	cout << sum << '\n';

	return 0;
}