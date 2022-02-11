#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	int cnt = 1;

	while (true) {
		int r, w, l;

		cin >> r;
		if (r == 0)
			return 0;
		cin >> w >> l;
		if (4 * r * r >= (w * w + l * l)) {
			cout << "Pizza " << cnt << " fits on the table.\n";
		}
		else {
			cout << "Pizza " << cnt << " does not fit on the table.\n";
		}
		cnt++;
	}

	return 0;
}