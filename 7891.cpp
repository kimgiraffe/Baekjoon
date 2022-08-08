#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;
	for (int test_case = 1; test_case <= T; ++test_case) {
		int x, y;
		cin >> x >> y;
		cout << x + y << '\n';
	}

	return 0;
}