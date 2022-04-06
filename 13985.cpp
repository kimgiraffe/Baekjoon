#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string str;
	getline(cin, str);
	if ((str[0] -'0') + (str[4] -'0') == str[8] - '0') {
		cout << "YES";
	}
	else {
		cout << "NO";
	}

	return 0;
}