#include <iostream>

using namespace std;

long long int A, B, C;
int res = 0;
long long int POW(long long int x, long long int y)
{
	if (y == 0)
		return 1;
	else if (y == 1)
		return x;
	if (y % 2 > 0)
		return POW(x, y - 1)*x;
	long long int half = POW(x, y / 2);
	half %= C;

	return (half*half) % C;
}

int main(void)
{
	cin >> A >> B >> C;
	cout << POW(A, B) % C;

	return 0;
}