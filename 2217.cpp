#include <iostream>
#include <algorithm>

using namespace std;

int arr[100001] = {};

int main(void)
{
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + N, greater<int>());
	
	long long ans = 0;
	for (int i = 0; i < N; i++) {
		long long sum = arr[i] * (i + 1);
		if (sum > ans)
			ans = sum;
	}

	cout << ans;
	return 0;
}