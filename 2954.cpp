#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string str;
	string p = "aeiou";
	getline(cin, str);

	for (int i = 0; i < str.size(); i++) {
		cout << str[i];
		if (p.find(str[i]) != string::npos)
			i += 2;
	}
	cout << '\n';
	return 0;
}