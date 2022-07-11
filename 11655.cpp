#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(void)
{
	string str;
	string ans = "";
	getline(cin, str);
	for (int i = 0; i < str.length(); i++) {
		if (str[i] >= 'a' && str[i] <= 'm')
			ans += (char)((int)str[i] + 13);
		else if (str[i] >= 'A' && str[i] <= 'M')
			ans += (char)((int)str[i] + 13);
		else if (str[i] >= 'n' && str[i] <= 'z')
			ans += (char)((int)str[i] - 13);
		else if (str[i] >= 'N' && str[i] <= 'Z')
			ans += (char)((int)str[i] - 13);
		else
			ans += str[i];
	}

	cout << ans;

	return 0;
}