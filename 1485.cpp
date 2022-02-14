#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main(void)
{
	int T;
	cin >> T;
	while (T--) {
		int arr[4][2], d[6];
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 2; j++) {
				cin >> arr[i][j];
			}
		}
		d[0] = (arr[0][0] - arr[1][0])*(arr[0][0] - arr[1][0]) + (arr[0][1] - arr[1][1])*(arr[0][1] - arr[1][1]);
		d[1] = (arr[1][0] - arr[2][0])*(arr[1][0] - arr[2][0]) + (arr[1][1] - arr[2][1])*(arr[1][1] - arr[2][1]);
		d[2] = (arr[2][0] - arr[3][0])*(arr[2][0] - arr[3][0]) + (arr[2][1] - arr[3][1])*(arr[2][1] - arr[3][1]);
		d[3] = (arr[3][0] - arr[0][0])*(arr[3][0] - arr[0][0]) + (arr[3][1] - arr[0][1])*(arr[3][1] - arr[0][1]);
		d[4] = (arr[0][0] - arr[2][0])*(arr[0][0] - arr[2][0]) + (arr[0][1] - arr[2][1])*(arr[0][1] - arr[2][1]);
		d[5] = (arr[3][0] - arr[1][0])*(arr[3][0] - arr[1][0]) + (arr[3][1] - arr[1][1])*(arr[3][1] - arr[1][1]);

		sort(d, d + 6);

		if (d[0] == d[1] && d[1] == d[2] && d[2] == d[3] && d[4] == d[5]) {
			cout << "1" << '\n';
		}
		else {
			cout << "0" << '\n';
		}
	}

	return 0;
}