#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, P;
	cin >> N >> P;

	if (N < 5) {
		cout << P;
	}
	else if (N >= 5 && N < 10) {
		if (P - 500 > 0) {
			cout << P - 500;
		}
		else {
			cout << "0";
		}
	}
	else if (N >= 10 && N < 15) {
		if (P - 500 > 0) {
			cout << min(P / 10 * 9, P - 500);
		}
		else {
			cout << "0";
		}
	}
	else if (N >= 15 && N < 20) {
		if (P - 2000 > 0) {
			cout << min(P / 10 * 9, P - 2000);
		}
		else{
			cout << "0";
		}
	}
	else {
		if (P - 2000 > 0) {
			cout << min(P / 100 * 75, P - 2000);
		}
		else {
			cout << "0";
		}
	}
	

	return 0;
}