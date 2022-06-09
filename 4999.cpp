#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string str1, str2;
	cin >> str1;
	cin >> str2;

	if (str2.length() <= str1.length()) {
		cout << "go";
	}
	else {
		cout << "no";
	}
	return 0;
}