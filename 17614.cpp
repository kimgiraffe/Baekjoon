#include <iostream>

using namespace std;

int main(void)
{
	int N, cnt = 0;
	cin >> N;

	for (int i = 1; i <= N;++i) {
		int tmp = i;
		while (tmp) {
			if (tmp % 10 == 3 || tmp % 10 == 6 || tmp % 10 == 9) {
				cnt++;
			}
			tmp /= 10;
		}
				
	}

	cout << cnt;

	return 0;
}