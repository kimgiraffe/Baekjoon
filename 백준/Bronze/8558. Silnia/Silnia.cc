#include <iostream>

using namespace std;

int main(void)
{
	int n, f = 1;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		f *= i;
		f %= 10;
	}

	cout << f;

	return 0;
}