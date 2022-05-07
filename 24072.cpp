#include <iostream>

using namespace std;

int main(void)
{
	int a, b, c;
	cin >> a >> b >> c;

	if (a <= c && b > c) {
		cout << 1;
	}
	else {
		cout << 0;
	}


	return 0;
}