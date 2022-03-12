	#include <iostream>
	#include <algorithm>

	using namespace std;

	int arr[100000];

	int main(void)
	{
		int N, S;
		cin >> N >> S;

		for (int i = 0; i < N; i++) {
			cin >> arr[i];
		}

		int start = 0, end = 0, sum = arr[0], len = N + 1;

		while (start <= end && end < N) {
			if (sum < S) {
				sum += arr[++end];
			}
			else {
				len = min(len, end - start + 1);
				sum -= arr[start++];
			}
		}
		if (len == N + 1) len = 0;
	
		cout << len;
		return 0;
	}