#include <iostream>

using namespace std;

int main(void)
{
	int N, s, a, cnt = 0;
	cin >> N;

	while (N--) {
		cin >> s >> a;
		if (a >= s) {
			cnt += a % s;
		}
		else {
			cnt += a;
		}
	}
	cout << cnt;

	return 0;
}