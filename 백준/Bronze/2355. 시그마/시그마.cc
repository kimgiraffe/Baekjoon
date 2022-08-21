#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long A, B, tmp;
	cin >> A >> B;
	tmp = A;
	if (A > B) {
		A = B;
		B = tmp;
	}
	cout << B * (B + 1) / 2 - A * (A + 1) / 2 + A;

	return 0;
}