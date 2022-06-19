#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	int cnt = 0;
	string str;
	getline(cin, str);

	int len = str.length();

	if (str[0] == ' ' || str[0] == '\0') {
		cnt--;
	}

	for (int i = 0; i < len; i++) {
		if (str[i] == ' ') {
			if (str[i + 1] && str[i + 1] != ' ')
				cnt++;
		}
	}

	cout << cnt + 1;

	return 0;
}