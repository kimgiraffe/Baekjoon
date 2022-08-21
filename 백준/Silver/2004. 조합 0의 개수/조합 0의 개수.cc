#include <iostream>
#include <algorithm>

using namespace std;

int cnt2 = 0, cnt5 = 0;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long int i, n, m;
	cin >> n >> m;

	for (i = 2; i <= n; i *= 2)
		cnt2 += n / i;
	for (i = 2; i <= n - m; i *= 2)
		cnt2 -= (n - m) / i;
	for (i = 2; i <= m; i *= 2)
		cnt2 -= m / i;
	for (i = 5; i <= n; i *= 5)
		cnt5 += n / i;
	for (i = 5; i <= n - m; i *= 5)
		cnt5 -= (n - m) / i;
	for (i = 5; i <= m; i *= 5)
		cnt5 -= m / i;


	cout << min(cnt2, cnt5);

	return 0;
}