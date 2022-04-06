#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(void)
{
	string str;
	cin >> str;
	int sum = 0;
	bool zero = false;

	for (int i = 0; i < str.size(); i++) {
		sum += str[i] - '0';
		if (!(str[i] - '0'))
			zero = true;
	}

	if (sum % 3 || !zero) {
		cout << -1;
	}
	else {
		sort(str.begin(), str.end(), greater<int>());
		cout << str;
	}

	return 0;
}