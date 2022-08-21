#include <iostream>
#include <math.h>

using namespace std;

const double PI = 3.14159265358979;

int main(void)
{
	long long a;
	cin >> a;
	cout << fixed;
	cout.precision(7);
	cout << (2 * PI) * sqrt(a/PI);

	return 0;
}