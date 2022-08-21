#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	vector<pair<int, int>> v(N);

	for (int i = 0; i < N; i++) {
		cin >> v[i].first;
		v[i].second = i;
	}

	sort(v.begin(), v.end());

	int ans = 0;
	for (int i = 0; i < N; i++)
		ans = max(ans, v[i].second - i);

	cout << ans + 1 << '\n';

	return 0;
}