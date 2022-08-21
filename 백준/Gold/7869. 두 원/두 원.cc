#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main(void)
{
	double x1, y1, r1, x2, y2, r2;
	cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

	double d = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
	double ANS = 0;

	if (d >= r1 + r2)
		ANS = 0;
	else if (d <= abs(r1 - r2))
		ANS = min(r1, r2) *min(r1, r2) * 3.1415926536;
	else {
		double A = 2 * acos((pow(d, 2) + pow(r1, 2) - pow(r2, 2)) / (2 * d*r1));
		double B = 2 * acos((pow(d, 2) + pow(r2, 2) - pow(r1, 2)) / (2 * d*r2));
		ANS = pow(r1, 2)*(A - sin(A)) + pow(r2, 2)*(B - sin(B));
		ANS /= 2;
	}

	cout << fixed;
	cout.precision(3);
	cout << ANS;
	return 0;
}