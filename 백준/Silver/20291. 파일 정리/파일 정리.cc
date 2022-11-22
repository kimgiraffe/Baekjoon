#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<pair<string, int>> res;
vector<string> f;
int cnt = 0;

int main(void)
{
	int N;
	cin >> N;
	for (int i = 1; i <= N; ++i) {
		string str;
		cin >> str;
		str.erase(0, str.find('.') + 1);
		f.push_back(str);
	}

	sort(f.begin(), f.end());

	string tmp = f[0];
	for (int i = 0; i < f.size(); ++i) {
		if (tmp == f[i]) cnt++;
		else if (tmp != f[i]) {
			res.push_back(pair<string, int>(tmp, cnt));
			tmp = f[i];
			cnt = 1;
		}
	}
	res.push_back(pair<string, int>(tmp, cnt));
	for (int i = 0; i < res.size(); ++i) {
		cout << res[i].first << " " << res[i].second << '\n';
	}


	return 0;
}