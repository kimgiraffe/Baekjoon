#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <map>

using namespace std;

map<string, string> DICT;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, S, E;
	string str, res = "";
	cin >> N;
	for (int i = 1; i <= N; ++i) {
		string s1, s2;
		cin >> s1 >> s2;
		DICT[s2] = s1;
	}

	cin >> str >> S >>E;
	for (int i = 0; i < str.length(); ++i) {
		string tmp;
		tmp.push_back(str[i]);
		res += DICT[tmp];
	}
	for (int i = S - 1; i < E; ++i) {
		cout << res[i];
	}

	return 0;
}