#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int solve(int num) {
	int cnt;
	while (true) {
		cnt = 0;
		if (num < 10) break;
		while (true) {
			if (num == 0) break;
			cnt += num % 10;
			num /= 10;
		}
		num = cnt;
	}

	return num;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	// freopen("input.txt", "r", stdin);
	int N;

	while (1) {
		cin >> N;
		if (N == 0) return 0;
		cout << solve(N);
		cout << '\n';
	}
	return 0;
}