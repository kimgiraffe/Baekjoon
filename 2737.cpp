#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	int T, n;
	cin >> T;
	while (T--) {
		cin >> n;
		int tmp = n, cnt = 0, a = 1;
		n--;
		while (n > 0) {
			a++;
			n = n - a;

			if (n%a == 0) {
				cnt++;
			}
		}
		cout << cnt << '\n';
	}

	return 0;
}