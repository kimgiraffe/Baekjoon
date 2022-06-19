#include <iostream>
#include <algorithm>

using namespace std;

int arr[100001];
int dp1[100001];
int dp2[100001];

int main(void)
{
	int n, sum = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}

	dp1[1] = arr[1];
	sum = dp1[1];

	for (int i = 2; i <= n; i++) {
		dp1[i] = max(dp1[i - 1] + arr[i], arr[i]);
		sum = max(sum, dp1[i]);
	}

	dp2[n] = arr[n];
	for (int i = n - 1; i > 0; i--) {
		dp2[i] = max(arr[i], dp2[i + 1] + arr[i]);
	}

	for (int i = 2; i < n; i++)
		sum = max(sum, dp1[i - 1] + dp2[i + 1]);

	cout << sum;

	return 0;
}