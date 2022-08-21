#include <iostream>
#include <string>

using namespace std;

int remain = 0;

int main(void)
{
	string str;
	cin >> str;
	for (int i = 0; i < str.length(); i++) {
		remain = (remain * 10 + (str[i] - '0')) % 20000303;
	}

	cout << remain;

	return 0;
}