#include <iostream>
#include <cmath>

using namespace std;

long long CCW(long long x1, long long y1, long long x2, long long y2, long long x3, long y3)
{
	long long ans = (x1 * y2 + x2 * y3 + x3 * y1) - (y1 * x2 + y2 * x3 + y3 * x1);
	if (ans < 0)
		return 1;
	else
		return -1;
}

int main(void)
{
	int X1, Y1, X2, Y2, X3, Y3, X4, Y4;
	cin >> X1 >> Y1 >> X2 >> Y2;
	cin >> X3 >> Y3 >> X4 >> Y4;

	if (CCW(X1, Y1, X2, Y2, X3, Y3)*CCW(X1, Y1, X2, Y2, X4, Y4) <= 0 && CCW(X3, Y3, X4, Y4, X1, Y1)*CCW(X3, Y3, X4, Y4, X2, Y2) <= 0)
		cout << 1;
	else
		cout << 0;

	return 0;
}