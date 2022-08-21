#include <iostream>

using namespace std;

long long dp[2001][2001];
int arr[2001];

void recursive(int i, int j)
{
	if (dp[i][j] != -1) return;
	if (i == j) {
		dp[i][j] = 1;
		return;
	}

	if (j - i == 1) {
		if (arr[i] == arr[j]) {
			dp[i][j] = 1;
			return;
		}
	}

	if (arr[i] != arr[j]) {
		dp[i][j] = 0;
		return;
	}

	recursive(i + 1, j - 1);
	if (dp[i + 1][j - 1] && arr[i] == arr[j]) {
		dp[i][j] = 1;
		return;
	}

	dp[i][j] = 0;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M, S, E;

	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> arr[i];
		for (int j = 1; j <= N; j++) {
			dp[i][j] = -1;
		}
	}
	cin >> M;
	while (M--) {
		cin >> S >> E;
		recursive(S, E);
		cout << dp[S][E] << '\n';
	}

	return 0;
}