#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	// freopen("input.txt", "r", stdin);
	int N;
	double tmp, sum = 0;
	cin >> N;
	for (int i = 0; i < N; ++i) {
		cin >> tmp;
		if (tmp == 0) {
			sum += 2;
		}
		else {
			sum += (1 / tmp);
		}
	}

	cout << fixed << sum << '\n';

	return 0;
}