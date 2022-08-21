#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<pair<string, int>> v;
string s1, s2;

int main(void)
{
	int T, n;
	cin >> T;
	while (T--) {
		int ans = 1;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> s1 >> s2;

			if (v.size() == 0)
			{
				v.push_back(make_pair(s2, 1));
				continue;
			}

			for (int j = 0; j < (int)v.size(); j++)
			{
				if (s2 == v[j].first)
				{
					v[j].second++;
					break;
				}
				if (j == (int)v.size() - 1) v.push_back(make_pair(s2, 0));
			}
		}
		for (int k = 0; k < (int)v.size(); k++)
			ans *= (v[k].second + 1);

		cout << ans - 1 << '\n';
		v.clear();
	}

	return 0;
}