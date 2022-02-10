#include <iostream>
#include <algorithm>

using namespace std;

int N;
long long L[100001] = {};
long long C[100001] = {};
long long C_now, ans = 0;

int main(void)
{
	cin >> N;
	for (int i = 1; i < N; i++) {
		cin >> L[i];
	}

	for (int i = 0; i < N; i++) {
		cin >> C[i];
	}
	C_now = C[0];
	ans = C_now * L[1];

	for (int i = 1; i < N; i++) {
		if (C_now < C[i]) {
			ans += C_now * L[i + 1];
		}
		else {
			C_now = C[i];
			ans += C_now * L[i + 1];
		}
	}
	cout << ans << '\n';

	return 0;
}