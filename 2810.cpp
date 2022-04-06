#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	int N;
	cin >> N;

	string v;
	cin >> v;

	int ans = N + 1, Lcnt = 0;

	for (int i = 0; i < N; i++) {
		if (v[i] == 'L') {
			Lcnt++;
		}
	}
	if (Lcnt == 0) ans = N;
	else ans -= (Lcnt / 2);

	cout << ans;

	return 0;
}