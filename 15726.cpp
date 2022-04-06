#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	long long A, B, C;
	cin >> A >> B >> C;

	if (B > C) {
		cout << A * B / C;
	}
	else {
		cout << A * C / B;
	}

	return 0;
}