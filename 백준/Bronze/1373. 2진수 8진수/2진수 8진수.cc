#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string s;
	cin >> s;
	while (s.size() % 3 != 0) {
		s = '0' + s;
	}

	for (int i = 0; i < s.length(); i+=3) {
		int num = (s[i] - '0') * 4 + (s[i + 1] - '0') * 2 + (s[i + 2] - '0');
		cout << num;
	}

	return 0;
}