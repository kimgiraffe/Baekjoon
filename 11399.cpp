#include <iostream>
#include <algorithm>

using namespace std;

int arr[1001] = {};

int main(void)
{
	int N, ans = 0;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + N);
	for (int i = 0; i < N; i++) {
		ans += (N - i) * arr[i];
	}
	cout << ans;

	return 0;
}