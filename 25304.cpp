#include <iostream>

using namespace std;

int main(void)
{
	long long X, N, a, b;
	cin >> X >> N;
	while (N--) {
		cin >> a >> b;
		X -= a * b;
	}

	if (X == 0) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}

	return 0;
}