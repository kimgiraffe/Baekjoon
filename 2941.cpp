#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string str;
	cin >> str;
	int len = str.size();
	int sum = str.size();
	for (int i = 0; i < len; i++) {
		if (str[i] == 'c' || str[i] == 's' || str[i] == 'z') {
			if (str[i + 1] == '=' || str[i+1] == '-') sum--;
		}
		else if (str[i] == 'l' || str[i] == 'n') {
			if (str[i + 1] == 'j') sum--;
		}
		else if (str[i] == 'd') {
			if (str[i + 1] == '-') sum--;
			else if (str[i + 1] == 'z' && str[i + 2] == '=') sum--;
		}
	}
	cout << sum;
	return 0;
}