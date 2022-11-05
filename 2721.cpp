#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;
	while (T--) {
		int n, W = 0;
		cin >> n;
		
		for (int i = 1; i <= n; ++i) {
			W += i * (i + 1)*(i + 2) / 2;
		}
		cout << W << '\n';
	}

	return 0;
}