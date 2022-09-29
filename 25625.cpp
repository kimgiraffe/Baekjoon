#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int x, y;
	cin >> x >> y;

	if (x > y) {
		cout << x + y;
	}
	else {
		cout << y - x;
	}

	return 0;
}