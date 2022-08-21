#include <iostream>
#include <algorithm>

using namespace std;

int arr[8] = {};
int tmp[8] = {};
int mem[3] = {};

int main(void)
{
	for (int i = 0; i < 8; i++) {
		cin >> arr[i];
		tmp[i] = arr[i];
	}

	sort(arr, arr + 8);

	cout << arr[3] + arr[4] + arr[5] + arr[6] + arr[7] << '\n';

	for (int i = 0; i < 8; i++) {
		if (arr[0] == tmp[i]) {
			mem[0] = i + 1;
		}
		else if (arr[1] == tmp[i]) {
			mem[1] = i + 1;
		}
		else if (arr[2] == tmp[i]) {
			mem[2] = i + 1;
		}
	}

	for (int i = 1; i <= 8; i++) {
		if (i != mem[0] && i != mem[1] && i != mem[2]) {
			cout << i << " ";
		}
	}

	return 0;
}