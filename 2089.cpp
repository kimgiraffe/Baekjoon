#include <iostream>

using namespace std;

void base(long long n)
{
	long long tmp, cpy;
	tmp = n % -2;
	if (tmp == 0 || n > 0)
		cpy = n / -2;
	else
		cpy = n / -2 + 1;
	if (n == -1) {
		cout << 11;
		return;
	}
	if (n != 1)
		base(cpy);
	if (tmp == -1)
		tmp *= -1;
	cout << tmp;
	return;
}

int main(void)
{
	long long N;
	cin >> N;

	if (N == 0) {
		cout << 0;
	}
	else {
		base(N);
	}

	return 0;
}