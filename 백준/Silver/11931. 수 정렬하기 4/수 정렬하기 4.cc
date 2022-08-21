#include <iostream>
#include <algorithm>

using namespace std;

bool comp(int i, int j) { return i > j; }

int arr[1000001] = {};

int main(void)
{
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + N, comp);

	for (int i = 0; i < N; i++) {
		cout << arr[i] << '\n';
	}

	return 0;
}