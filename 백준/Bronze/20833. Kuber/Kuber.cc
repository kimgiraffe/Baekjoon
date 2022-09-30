#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, ans = 0;
	cin >> N;
	for (int i = 1; i <= N; ++i) {
		ans += i * i * i;
	}

	cout << ans;

	return 0;
}