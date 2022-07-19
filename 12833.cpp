#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int A, B, C;
	cin >> A >> B >> C;
	if (C % 2 == 0) {
		cout << A;
	}
	else {
		A ^= B;
		cout << A;
	}

	return 0;
}