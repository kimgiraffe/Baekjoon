#include <iostream>
#include <math.h>

using namespace std;

int main(void)
{
	int n;
	cin >> n;
	int n4 = n / 10000;
	int n3 = (n % 10000) / 1000;
	int n2 = (n % 1000) / 100;
	int n1 = (n % 100) / 10;
	int n0 = (n % 10);
	int res = pow(n4, 5) + pow(n3, 5) + pow(n2, 5) + pow(n1, 5) + pow(n0, 5);
	cout << res;

	return 0;
}