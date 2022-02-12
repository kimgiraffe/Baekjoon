#include <iostream>
#include <algorithm>

using namespace std;

int arr[1000001] = {};
int before[1000001] = {};

int main(void)
{
	int N;
	cin >> N;

	arr[1] = 0;

	for (int i = 2; i <= N; i++) {
		arr[i] = arr[i - 1] + 1;
		before[i] = i - 1;
		if (i % 3 == 0) {
			if (arr[i] > arr[i / 3] + 1) {
				arr[i] = arr[i / 3] + 1;
				before[i] = i / 3;
			}
		}
		if (i % 2 == 0) {
			if (arr[i] > arr[i / 2] + 1) {
				arr[i] = arr[i / 2] + 1;
				before[i] = i / 2;
			}
		}
	}
	
	cout << arr[N] << '\n';

	while (true) {
		cout << N << " ";
		N = before[N];
		if (N == 0)
			break;
	}

	return 0;
}