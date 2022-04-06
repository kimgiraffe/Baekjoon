#include <iostream>

using namespace std;

int main(void)
{
	int N, ans = 0;
	cin >> N;
	for (int i = 1; i <= N / 3; i++) {
		for (int j = 1; j <= N / 3; j++) {
			int sum = 0;
			sum = i * 3 + j * 3;
			if ((N - sum) % 3 == 0 && sum < N)
				ans++;
		}
	}
	cout << ans;
	return 0;
}