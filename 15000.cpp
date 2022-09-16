#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string str;
	cin >> str;

	for (int i = 0; i < str.length(); ++i) {
		str[i] += 'A' - 'a';
	}

	cout << str;

	return 0;
}