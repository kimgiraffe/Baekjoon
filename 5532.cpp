#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	int L, A, B, C, D;
	int ans = 0;
	cin >> L >> A >> B >> C >> D;
	if (A%C == 0 && B%D == 0) {
		ans=max(A / C, B/D);
	}
	else if (A%C != 0 && B%D == 0) {
		ans = max(A / C + 1, B / D);
	}
	else if (A%C == 0 && B%D != 0) {
		ans = max(A / C, B / D + 1);
	}
	else if (A%C != 0 && B%D != 0) {
		ans = max(A / C + 1, B / D + 1);
	}
	cout << L - ans;
	return 0;
}