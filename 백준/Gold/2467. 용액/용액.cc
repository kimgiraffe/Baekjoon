#include <iostream>
#include <algorithm>

using namespace std;

long long arr[100001];

int main(void)
{
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	int left = 0, right = N - 1;
	int res = abs(arr[left] + arr[right]);
	long long resA = arr[left], resB = arr[right];

	while (left < right) {
		int tmp = arr[left] + arr[right];
		if (abs(tmp) < abs(res)) {
			res = abs(tmp);
			resA = arr[left];
			resB = arr[right];
		}

		if (tmp < 0) {
			left++;
		}
		else {
			right--;
		}
	}
	cout << resA << " " << resB;

	return 0;
}