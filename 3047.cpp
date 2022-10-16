#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(void)
{
	int n[3];
	string str;
	cin >> n[0] >> n[1] >> n[2];
	sort(n, n + 3);
	cin >> str;
	if (str == "ABC") {
		cout << n[0] << ' ' << n[1] << ' ' << n[2];
	}
	else if (str == "ACB") {
		cout << n[0] << ' ' << n[2] << ' ' << n[1];
	}
	else if (str == "BAC") {
		cout << n[1] << ' ' << n[0] << ' ' << n[2];
	}
	else if (str == "BCA") {
		cout << n[1] << ' ' << n[2] << ' ' << n[0];
	}
	else if (str == "CAB") {
		cout << n[2] << ' ' << n[0] << ' ' << n[1];
	}
	else if (str == "CBA") {
		cout << n[2] << ' ' << n[1] << ' ' << n[0];
	}
	return 0;
}