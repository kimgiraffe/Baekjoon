#include <iostream>
#include <math.h>

using namespace std;

int main(void)
{
	int W, H, X, Y, P, cnt = 0;
	cin >> W >> H >> X >> Y >> P;

	int x, y;
	while (P--) {
		cin >> x >> y;
		if (X <= x && x <= X + W && Y <= y && y <= Y + H) {
			cnt++;
		}
		else if ((x - X)*(x - X) + (y - Y - (H/2))*(y - Y - (H/2)) - (H/2) * (H/2) <= 0) {
			cnt++;
		}
		else if ((x - X - W)*(x - X - W) + (y - Y - (H / 2))*(y - Y - (H / 2)) - (H / 2)*(H / 2) <= 0) {
			cnt++;
		}
	}

	cout << cnt;

	return 0;
}