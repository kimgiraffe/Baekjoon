#include <iostream>

using namespace std;

int main(void)
{
	int T, A, B, C;
	cin >> T;
	A = T / 300;
	B = (T - A * 300) / 60;
	C = (T - A * 300 - B * 60) / 10;

	if (T % 10 != 0)
		cout << "-1";
	else
		cout << A << " " << B << " " << C;

	return 0;
}