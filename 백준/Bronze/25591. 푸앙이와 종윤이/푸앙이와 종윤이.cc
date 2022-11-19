#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;
	cin >> N >> M;
	int a = 100 - N, b = 100 - M;
	int c = 100 - a - b;
	int d = a * b;
	int q = d / 100;
	int r = d % 100;
	cout << a << ' ' << b << ' ' << c << ' ' << d << ' ' << q << ' ' << r << '\n';
	cout << c + q << ' ' << r << '\n';

	return 0;
}