#include <iostream>
#include <algorithm>

using namespace std;

int S[5] = {};

int main(void)
{
	int T;
	cin >> T;
	while (T--) {
		for (int i = 0; i < 5; i++) {
			cin >> S[i];
		}
		sort(S, S + 5);
		if (S[3] - S[1] >= 4)
			cout << "KIN" << '\n';
		else
			cout << S[1] + S[2] + S[3] << '\n';
	}


	return 0;
}