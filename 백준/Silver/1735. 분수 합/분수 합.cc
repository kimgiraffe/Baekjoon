#include <iostream>
#include <algorithm>

using namespace std;

void comp(int a, int b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

int gcd(int x, int y)
{
	return y ? gcd(y, x%y) : x;
}

int main(void)
{
	int a1, b1, a2, b2;
	cin >> a1 >> b1;
	cin >> a2 >> b2;

	if (a1*b2 + a2 * b1 < b1*b2) {
		comp(a1*b2 + a2 * b1, b1*b2);
	}
	cout << (a1*b2 + a2 * b1) / gcd(a1*b2 + a2 * b1, b1*b2) << " " << (b1*b2) / gcd(a1 * b2 + a2 * b1, b1*b2);

	return 0;
}