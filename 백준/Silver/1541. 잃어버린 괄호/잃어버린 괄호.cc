#include <iostream>
#include <string.h>
#include <string>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string str, num;
	cin >> str;
	int len = str.length();
	bool isMinus = false;
	int result = 0;

	for (int i = 0; i <= len; i++) {
		if (str[i] == '+' || str[i] == '-' || i == len) {
			if (isMinus) {
				result -= stoi(num);
				num = "";
			}
			else {
				result += stoi(num);
				num = "";
			}
		}
		else {
			num += str[i];
		}
		if (str[i] == '-') {
			isMinus = true;
		}
	}

	cout << result;

	return 0;
}