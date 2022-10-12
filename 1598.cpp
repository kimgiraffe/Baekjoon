#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	int a, b;
	cin >> a >> b;
	a--;
	b--;
	cout << abs(a / 4 - b / 4) + abs((a % 4) - (b % 4));

	return 0;
}