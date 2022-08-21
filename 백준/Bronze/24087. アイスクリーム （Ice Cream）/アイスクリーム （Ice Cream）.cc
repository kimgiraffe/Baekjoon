#include <iostream>

using namespace std;

int main(void)
{
	int s, a, b, x = 0;
	cin >> s >> a >> b;
	while (true) {
		if (a + b * x >= s)
			break;
		x++;
	}

	cout << 250 + 100 * x;

	return 0;
}