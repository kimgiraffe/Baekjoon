#include <iostream>
#include <algorithm>
using namespace std;

int n[7];

int main(void)
{
	int T;
	cin >> T;
	while (T--) {
		int sum = 0;
		for (int i = 0; i < 7; i++) {
			cin >> n[i];
			if (n[i] % 2 == 0) {
				sum += n[i];
			}
		}
		sort(n, n + 7);
		cout << sum << " ";
		for (int i = 0; i < 7; i++) {
			if (n[i] % 2 == 0) {
				cout << n[i] << '\n';
				break;	
			}
		}
	}

	return 0;
}