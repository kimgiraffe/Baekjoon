#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N, a_T = 0, b_T = 0;
	cin >> N;
	for (int i = 0; i < N; ++i) {
		int a, b;
		cin >> a >> b;
		if (a < b) {
			b_T++;
		}
		else if (a > b) {
			a_T++;
		}
	}

	cout << a_T << " " << b_T;
	return 0;
}