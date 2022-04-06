#include <iostream>

using namespace std;

long long DP[1000001] = {};
int T, n;
const int mod = 1000000009;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	DP[1] = 1;
	DP[2] = 2;
	DP[3] = 4;

	cin >> T;
	while (T--) {
		cin >> n;
		for (int i = 4; i <= n; i++) {
			DP[i] = (DP[i - 1] + DP[i - 2] + DP[i - 3]) % mod;
		}
		cout << DP[n] % mod << "\n";
	}
	return 0;
}