#include <iostream>
#include <algorithm>

using namespace std;

double arr[10001];
double ans = 0;

int main(void)
{
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	ans = arr[0];

	for (int i = 1; i < N; i++) {
		if (arr[i] * arr[i - 1] >= arr[i]) {
			arr[i] = arr[i - 1] * arr[i];
		}
		ans = max(ans, arr[i]);
	}

	cout << fixed;
	cout.precision(3);
	cout << ans;

	return 0;
}