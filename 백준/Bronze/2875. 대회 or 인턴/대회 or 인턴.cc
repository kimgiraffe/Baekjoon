#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	int N, M, K, ans = 0;
	cin >> N >> M >> K;

	while (N >= 2 && M >= 1 && N + M >= K + 3) {
		N -= 2;
		M -= 1;
		ans ++;
	}

	cout << ans;

	return 0;
}