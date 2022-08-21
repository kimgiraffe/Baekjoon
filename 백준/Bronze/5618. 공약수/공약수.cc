#include <iostream>
#include <algorithm>

using namespace std;


int main(void)
{
	int n, a, b, c;
	cin >> n;
	if (n == 2) {
		cin >> a >> b;
	}
	else {
		cin >> a >> b >> c;
	}

	for (int i = 1; i <= a; i++) {
		if (a%i == 0 && b%i == 0 && c%i == 0) {
			cout << i << '\n';
		}
	}

	return 0;
}