#include <iostream>

using namespace std;

int main(void)
{
	for (int i = 0; i < 2; i++) {
		int T, F, S, P, C;
		cin >> T >> F >> S >> P >> C;

		cout << T * 6 + F * 3 + S * 2 + P * 1 + C * 2 << ' ';
	}
	return 0;
}