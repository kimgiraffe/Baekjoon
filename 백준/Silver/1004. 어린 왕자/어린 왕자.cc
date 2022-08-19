#include <iostream>
#include <math.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
	int T, x1, y1, x2, y2, n, cx, cy, r, cnt = 0;
	cin >> T;
	while (T--) {
		cin >> x1 >> y1 >> x2 >> y2;
		cin >> n;
		while (n--) {
			cin >> cx >> cy >> r;
			if (((x1 - cx)*(x1 - cx) + (y1 - cy)*(y1 - cy) >= r * r) && ((x2 - cx)*(x2 - cx) + (y2 - cy)*(y2 - cy) >= r * r)) {
				cnt += 0;
			}
			else if (((x1 - cx)*(x1 - cx) + (y1 - cy)*(y1 - cy) < r * r) && ((x2 - cx)*(x2 - cx) + (y2 - cy)*(y2 - cy) < r * r)) {
				cnt += 0;
			}
			else {
				cnt++;
			}
		}		
		cout << cnt << '\n';
		cnt = 0;
	}

	return 0;
}