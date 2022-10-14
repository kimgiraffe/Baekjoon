#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;
	cin.ignore();
	while (T--) {
		int sum = 0;
		string s;
		getline(cin, s);
		string tmp = "";
		for (int i = 0; i < s.size(); ++i) {
			tmp += s[i];
			if (s[i] == ' ' || i == s.size() - 1) {
				sum += stoi(tmp);
				tmp = "";
			}
		}
		cout << sum << '\n';
	}

	return 0;
}