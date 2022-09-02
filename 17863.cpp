#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	bool flag = true;
	string str;
	cin >> str;
	for (int i = 0; i < 3; ++i) {
		if (str[i] != '5') {
			flag = false;
		}
	}

	if (flag) cout << "YES";
	else cout << "NO";

	return 0;
}