#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int h, m, res = 0;
	cin >> h >> m;
	res += (h - 9) * 60 + m;
	cout << res << '\n';

	return 0;
}