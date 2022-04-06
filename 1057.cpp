#include <iostream>

using namespace std;

int main(void)
{
	int n, a, b, cnt = 0;
	cin >> n >> a >> b;

	while (a != b) {
		a = a - a / 2;
		b = b - b / 2;
		cnt++;
	}

	cout << cnt;

	return 0;
}