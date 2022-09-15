#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	int T;
	cin >> T;
	while (T--) {
		string str;
		cin >> str;
		int len = str.length();
		int cnt = 0;
		for (int i = 0; i < len; ++i) {
			if (str[i] == 'U') {
				cnt++;
			}
			if (str[i] == 'D') {
				break;
			}
		}
		cout << cnt << '\n';
	}

	return 0;
}