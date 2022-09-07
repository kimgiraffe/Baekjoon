#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Rules {
	int idx;
	string str;
};

Rules R[51];

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	// freopen("input.txt", "r", stdin);
	int q, r;
	cin >> q;
	for (int i = 0; i <= q; ++i) {
		string s;
		getline(cin, s);
		R[i].idx = i - 1;
		R[i].str = s;
	}

	cin >> r;
	for (int i = 1; i <= r; ++i) {
		int rules;
		cin >> rules;
		if (rules >= 1 && rules <= q) {
			cout << "Rule " << rules << ": " << R[rules].str << '\n';
		}
		else {
			cout << "Rule " << rules << ": " << "No such rule\n";
		}
	}

	return 0;
}