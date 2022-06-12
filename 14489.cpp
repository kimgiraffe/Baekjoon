#include <iostream>

using namespace std;

int main(void)
{
	long long A, B, C;
	cin >> A >> B >> C;

	if (C * 2 > A + B) {
		cout << A + B;
	}
	else {
		cout << (A + B) - C * 2;
	}

	return 0;
}