#include <iostream>
#include <algorithm>

using namespace std;

int arr[1001][3];
long long dp[1001][3];
int p[1001];

int main(void)
{
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (i == j) {
				dp[1][j] = arr[1][j];
			}
			else {
				dp[1][j] = 1001;
			}
		}


		for (int k = 2; k <= N; k++) {
			dp[k][0] = min(dp[k - 1][1], dp[k - 1][2]) + arr[k][0];
			dp[k][1] = min(dp[k - 1][0], dp[k - 1][2]) + arr[k][1];
			dp[k][2] = min(dp[k - 1][0], dp[k - 1][1]) + arr[k][2];
			if (k == N) {
				if (i == 0) {
					p[i] = min(dp[N][1], dp[N][2]);
				}
				else if (i == 1) {
					p[i] = min(dp[N][0], dp[N][2]);
				}
				else if (i == 2) {
					p[i] = min(dp[N][0], dp[N][1]);
				}
			}
		}
	}
	
	cout << min(p[0], min(p[1], p[2]));


	return 0;
}