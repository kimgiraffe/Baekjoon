#include <iostream>
#include <algorithm>

using namespace std;

int S[10] = {};

int main(void)
{
	int T;
	cin >> T;
	while (T--) {
		for (int i = 0; i < 10; i++) {
			cin >> S[i];
		}
		sort(S, S + 10);
		cout << S[7] << '\n';
	}

	return 0;
}