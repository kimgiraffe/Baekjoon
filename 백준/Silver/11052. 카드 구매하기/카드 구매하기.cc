#include <iostream>
#include <algorithm>

using namespace std;

int V[1001] = {};
int dp[1001] = {};

int main(void)
{
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> V[i];	
	}

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= i; j++) {
			dp[i] = max(dp[i], dp[i - j] + V[j]);
		}
	}

	cout << dp[N];

	return 0;
}