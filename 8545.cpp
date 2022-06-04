#include <iostream>

using namespace std;

int main(void)
{
	char ch[3];

	for (int i = 0; i < 3; i++) {
		cin >> ch[i];
	}

	for (int i = 2; i >= 0; i--) {
		cout << ch[i];
	}

	return 0;
}