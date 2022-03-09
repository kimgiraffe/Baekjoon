#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string str;
	int T;
	cin >> T;
	while (T--) {
		cin >> str;
		cout << (str[0] - '0') + (str[2] - '0') << "\n";
	}

	return 0;
}