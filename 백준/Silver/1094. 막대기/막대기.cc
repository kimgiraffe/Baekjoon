#include <iostream>

using namespace std;

int b[7];

int main(void)
{
	int X, j = 0, cnt = 0, ans = 0;
	cin >> X;

	while (X > 0) {
		b[j] = X % 2;
		X /= 2;
		j++;
		cnt++;
	}

	for (int i = cnt - 1; i >=0; i--) {
		if (b[i] == 1)
			ans++;
	}
	cout << ans;
	return 0;
}