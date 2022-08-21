#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string str1;
	cin >> str1;
	for (int i = 0; i < str1.length(); i++) {
		if (str1[i] < 'D') {
			str1[i] += 23;
		}
		else {
			str1[i] -= 3;
		}
	}

	cout << str1;

	return 0;
}