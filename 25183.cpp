#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	cin >> N;
	string str;
	cin >> str;

	for (int i = 0; i <= N - 5; ++i) {
		bool flag = true;
		for (int j = i; j < i + 4; ++j) {
			if (str[j] - str[j + 1] != 1 && str[j] - str[j + 1] != -1) {
				flag = false;
				break;
			}
		}
		if (flag) {
			cout << "YES";
			return 0;
		}
	}

	cout << "NO";


	return 0;
}