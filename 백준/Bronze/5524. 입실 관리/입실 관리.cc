#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;
	while (T--) {
		string s;
		cin >> s;
		for (int i = 0; i < s.length(); ++i) {
			if (s[i] >= 'A' && s[i] <= 'Z') {
				s[i] += 'a' - 'A';
			}
		}
		cout << s << '\n';
	}

	return 0;
}