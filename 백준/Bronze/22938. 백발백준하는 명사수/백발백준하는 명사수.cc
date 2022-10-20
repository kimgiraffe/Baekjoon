#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	long long x1, y1, r1, x2, y2, r2;
	cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
	long long d = (x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2);
	if (d < (r1 + r2)*(r1 + r2)) {
		cout << "YES";
	}
	else {
		cout << "NO";	
	}
	return 0;
}