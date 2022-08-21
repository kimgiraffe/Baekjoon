#include <iostream>

using namespace std;

int arr[101];

long long int GCD(int x, int y) {
	if (x < y) {
		int tmp = x;
		x = y;
		y = tmp;
	}
	
	return y ? GCD(y, x%y) : x;
}

int main(void)
{
	int t, n;
	cin >> t;
	while (t--) {
		long long int total = 0;
		cin >> n;
		for (int i = 1; i <= n; i++) {
			cin >> arr[i];
		}
		for (int i = 1; i <= n; i++) {
			for (int j = i+1; j <= n; j++) {
				total += GCD(arr[i], arr[j]);
			}
		}
		cout << total << "\n";
	}

	return 0;
}