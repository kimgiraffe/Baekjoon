#include <iostream>

using namespace std;

int main(void)
{
	while (true) {
		int x, y;
		cin >> x >> y;
		if (x == 0 && y == 0) break;
		cout << x / y << ' ' << x - (x / y)*y << " / " << y << '\n';
	}

	return 0;
}