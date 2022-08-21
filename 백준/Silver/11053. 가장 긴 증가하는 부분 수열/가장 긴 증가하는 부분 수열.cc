#include <iostream>
#include <algorithm>

using namespace std;

int N, ans = 0;
int arr[1001] = {};
int dp[1001] = {};

int main(void)
{
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> arr[i];
	}
	for (int i = 1; i <= N; i++) {
		for (int j = 0; j < i; j++) {
			if (arr[i] > arr[j] && dp[i] <= dp[j]) {
				dp[i] = dp[j] + 1;
				if (dp[i] > ans)
					ans = dp[i];
			}
		}
	}

	cout << ans;

	return 0;
}