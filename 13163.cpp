#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	cin.ignore();
	while (N--) {
		string str;
		getline(cin, str);
		int idx;
		for (idx = 0; idx < str.length(); ++idx) {
			if (str[idx] == ' ') break;
		}
		cout << "god";
		for (int j = idx; j < str.length(); ++j) {
			if (str[j] != ' ') {
				cout << str[j];
			}
		}
		cout << '\n';
	}

	return 0;
}