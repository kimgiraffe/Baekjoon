#include <iostream>

using namespace std;

int main(void)
{
	int T, n, m;
	cin >> T;
	while (T--) {
		cin >> n >> m;
		cout << (n - m) * m + 1 << "\n";
	}

	return 0;
}