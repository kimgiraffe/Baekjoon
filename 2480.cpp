#include <iostream>
#include <algorithm>

using namespace std;

int d[3];
int ans = 0;

int main(void)
{
	for (int i = 0; i < 3; i++) {
		cin >> d[i];
	}
	sort(d, d + 3);

	if (d[0] == d[1] && d[1] == d[2]) {
		ans = 10000 + d[0] * 1000;
	}
	else if (d[0] != d[1] && d[0] != d[2] && d[1] != d[2]) {
		ans = d[2] * 100;
	}
	else {
		if (d[0] == d[1] && d[0] != d[2]) {
			ans = 1000 + d[0] * 100;
		}
		else if (d[0] == d[2] && d[0] != d[1]) {
			ans = 1000 + d[0] * 100;
		}
		else if (d[1] == d[2] && d[0] != d[1]) {
			ans = 1000 + d[1] * 100;
		}
	}

	cout << ans;

	return 0;
}