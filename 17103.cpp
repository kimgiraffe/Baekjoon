#include <iostream>
#include <algorithm>


using namespace std;

int arr[1000001];

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	for (int i = 2; i < 1000001; i++) arr[i] = i;
	for (int i = 2; i*i <= 1000000; i++) {
		if (arr[i] == 0) continue;
		for (int j = i * i; j <= 1000000; j += i)
			arr[j] = 0;
	}
	
	int T;
	cin >> T;
	while (T--) {
		int n;
		cin >> n;
		int cnt = 0;

		for (int i = 2; i < n; i++) {
			if (arr[i] + arr[n - i] == n) {
				cnt++;
				if (n - i == i) {
					cnt++;
				}
			}
		}
		cout << cnt / 2 << '\n';
	}

	return 0;
}