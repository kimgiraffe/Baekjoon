#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string str;
	cin >> str;

	if (str.length() == 2) {
		cout << str[0] - '0' + str[1] - '0';
	}
	else if (str.length() == 3) {
		if (str[1] == '0') {
			cout << (str[0] - '0') * 10 + (str[1] - '0') + (str[2] - '0');
		}
		else if (str[2] == '0') {
			cout << (str[0] - '0') + (str[1] - '0') * 10 + (str[2] - '0');
		}
	}
	else if (str.length() == 4) {
		cout << (str[0] - '0') * 10 + (str[1] - '0') + (str[2] - '0') * 10 + (str[3] -'0');
	}
	return 0;
}