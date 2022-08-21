#include <iostream>

using namespace std;

int main(void)
{
	double a;
	cin >> a;
	cout.fixed;
	cout.precision(10);
	cout << 100 / a << '\n';
	cout << 100 / (100 - a);
    
	return 0;
}