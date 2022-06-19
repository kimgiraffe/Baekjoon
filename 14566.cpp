#include <iostream>
#include <algorithm>

using namespace std;

int arr[5000];

int main(void)
{
	int n, cnt = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + n);
	int d = 32800001;
	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++) {
			d = min(d, arr[j] - arr[i]);
			
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (d == arr[j] - arr[i]) {
				cnt++;
			}
		}
	}
	cout << d << ' ' << cnt;

	return 0;
}