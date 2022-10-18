#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	while (true) {
		int s, t, sum = 0;
		vector <pair<int, int>> v;
		v.push_back(make_pair(0, 0));
		cin >> n;
		if (n == -1) break;
		for (int i = 1; i <= n; ++i) {
			cin >> s >> t;
			v.push_back(make_pair(s, t));
			sum += v[i].first * (v[i].second - v[i - 1].second);
		}
		cout << sum << " miles\n";
	}

	return 0;
}