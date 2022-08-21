#include <iostream>
#include <algorithm>

using namespace std;

int n;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int DP[11];
	DP[1] = 1;
	DP[2] = 2;
	DP[3] = 4;

	int T;
	cin >> T;
	while (T--) {
		cin >> n;
		for (int i = 4; i <= n; i++) {
			DP[i] = DP[i - 1] + DP[i - 2] + DP[i - 3];
		}
		cout << DP[n] << "\n";
	}
	return 0;
}