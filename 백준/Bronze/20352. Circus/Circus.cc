#include <iostream>
#include <math.h>

const double PI = 3.14159265358979;
using namespace std;

int main(void)
{
	long long a;
	cin >> a;
	cout << fixed;
	cout.precision(10);

	cout << sqrt(a / PI) * 2 * PI;

	return 0;
}