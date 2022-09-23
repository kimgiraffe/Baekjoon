#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	freopen("input.txt", "r", stdin);
	int N;
	string str;
	cin >> N;
	cin.ignore();
	for (int i = 1; i <= N; i++) {
		getline(cin, str);
		if (str[0] >= 'a' && str[0] <= 'z') {
			str[0] += ('A' - 'a');
		}
		cout << str << '\n';
	}

	return 0;
}