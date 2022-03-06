#include <iostream>

using namespace std;

int main(void)
{
	int T, n;
	cin >> T;
	while (T--) {
		int tmp = 0;
		cin >> n;
		while (n > 0) {
			if (n % 2 == 1) {
				cout << tmp << " ";
			}
			n /= 2;
			tmp++;
		}
		cout << "\n";
	}
}