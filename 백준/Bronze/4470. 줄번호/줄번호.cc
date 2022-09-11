#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

using namespace std;

struct Text {
	int idx;
	string s;
};

Text T[1000];

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	// freopen("input.txt", "r", stdin);

	int N;
	cin >> N;
	for (int i = 0; i <= N; ++i) {
		string str;
		getline(cin, str);
		T[i].idx = i;
		T[i].s = str;
	}

	for (int i = 1; i <= N; ++i) {
		cout << T[i].idx << ". " << T[i].s << '\n';
	}

	return 0;
}