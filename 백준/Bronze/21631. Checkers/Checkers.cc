#include <iostream>

using namespace std;

int main(void)
{
	long long a, b;
	cin >> a >> b;
	if (a >= b) {
		cout << b;
	}
	else {
		if (b != 0) {
			cout << a + 1;
		}
	}

	return 0;
}