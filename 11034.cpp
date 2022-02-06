#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	int a, b, c;

	while (1) {
		cin >> a >> b >> c;
		if (cin.fail())
			return 0;

		cout << max(b - a - 1, c - b - 1) << '\n';
	}

	return 0;
}