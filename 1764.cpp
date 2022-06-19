#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> v, ans;
string str;

int main(void)
{
	int N, M, cnt = 0;
	cin >> N >> M;

	for (int i = 0; i < N + M; i++) {
		cin >> str;
		v.push_back(str);
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < N + M - 1; i++) {
		if (v[i] == v[i + 1]) {
			ans.push_back(v[i]);
			cnt++;
		}
	}

	cout << cnt << '\n';
	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << '\n';
	}

	return 0;
}