#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
	vector<int> v;
	int alp[26] = { 0 };
	int cnt = 0, ans = 0;
	string str;
	getline(cin, str);

	for (int i = 0; i < str.length(); i++) {
		alp[str[i] - 'a']++;
	}

	for (int i = 0; i < 26; i++) {
		if (alp[i]) v.push_back(alp[i]), cnt++;
	}
	sort(v.begin(), v.end());

	for (int i = 0; i < cnt - 2; i++) {
		ans += v[i];
	}
	
	cout << ans;

	return 0;
}
