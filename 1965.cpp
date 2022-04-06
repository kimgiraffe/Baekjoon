#include <iostream>

using namespace std;

int b[1001];
int dp[1001];

int main(void)
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> b[i];
	}
	int max = 0;
	for (int i = 1; i <= n; i++) {
		dp[i] = 1;
		for (int j = 1; j < i; j++) {
			if (b[j] < b[i] && dp[i] < dp[j] + 1) {
				dp[i] = dp[j] + 1;
			}
		}
		if (max < dp[i])
			max = dp[i];
	}
	cout << max;
	return 0;
}