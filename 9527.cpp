#include <iostream>

using namespace std;

long long sum(long long x)
{
	x++;
	long long a = x, b = 1, ret = 0;
	while (a) {
		if (x & b) ret += x % b + (x - x % (b * 2)) / 2;
		else ret += (x - x % b) / 2;
		b <<= 1;
		a >>= 1;
	}
	return ret;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long A, B;
	cin >> A >> B;
	cout << sum(B) - sum(A - 1);
	return 0;
}