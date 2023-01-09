#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#define MAX 200000

using namespace std;

int arr[MAX];

int main(void) {
	int N, C;
	scanf("%d %d", &N, &C);

	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}

	sort(arr, arr + N);

	int start = 1, end = arr[N - 1] - arr[0];
	int d = 0, ans = 0;

	while (start <= end) {
		int mid = (start + end) / 2;
		int begin = arr[0];
		int cnt = 1;

		for (int i = 1; i < N; i++) {
			d = arr[i] - begin;
			if (mid <= d) {
				cnt++;
				begin = arr[i];
			}
		}

		if (cnt >= C) {
			ans = mid;
			start = mid + 1;
		}
		else {
			end = mid - 1;
		}
	}

	printf("%d\n", ans);


	return 0;
}