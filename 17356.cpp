#include <iostream>
#include <math.h>

using namespace std;

int main(void)
{
	double A, B;
	cin >> A >> B;
	cout << fixed;
	cout.precision(20);
	cout << 1 / (1 + pow(10, (B - A) / 400));
	return 0;
}