#include <iostream>

using namespace std;

int main(void)
{
	int arr[11], sum = 0;
	for (int i = 1; i < 11; i++) {
		cin >> arr[i];
	}

	for (int i = 1; i < 11; i++) {
		int ans = sum + arr[i];
		if (ans >= 100) {
			if (ans - 100 <= 100 - sum) {
				cout << ans;
			}
			else {
				cout << sum;
			}
			return 0;
		}
		sum = ans;
	}
	cout << sum;
}