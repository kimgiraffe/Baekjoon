#include <iostream>
#include <math.h>

using namespace std;

int main(void)
{
	int w, h;
	cin >> w >> h;
	cout << fixed;
	cout.precision(9);
	cout << w + h - sqrt(w * w + h * h);

	return 0;
}