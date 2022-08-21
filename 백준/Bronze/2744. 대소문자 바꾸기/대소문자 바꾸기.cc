#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string str;
	cin >> str;
	
	int len = str.length();
	for (int i = 0; i < len; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 'a' - 'A';
		else
			str[i] -= 'a' - 'A';
	}

	cout << str;
	return 0;
}