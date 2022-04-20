#include <iostream>

using namespace std;

int arr[5];

int main(void)
{
	int N, cnt = 0;
	cin >> N;
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
		if (arr[i] == N)
			cnt++;
	}

	cout << cnt;

	return 0;
}