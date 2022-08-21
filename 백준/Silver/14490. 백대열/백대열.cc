#include <iostream>

using namespace std;

void comp(int a, int b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

int GCD(int x, int y)
{
	return y ? GCD(y, x%y) : x;
}

int main(void)
{
	int n, m;
	char c;
	cin >> n >> c >> m;
	if (n < m) {
		comp(n, m);
	}

	cout << n / GCD(n, m) << ":" << m / GCD(n, m);
	return 0;
}