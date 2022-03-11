#include <iostream>

using namespace std;

int main(void)
{
	bool check;
	int r[200];
	int N;
	cin >> N;

	int s[200][3];
	for (int i = 0; i < N; i++) {
		cin >> s[i][0] >> s[i][1] >> s[i][2];
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < N; j++) {
			check = false;

			for (int k = j + 1; k < N; k++) {
				if (s[j][i] == s[k][i]) {
					s[k][i] = 0;
					check = true;
				}
			}

			if (check)
				s[j][i] = 0;
		}
	}

	for (int i = 0; i < N; i++) {
		r[i] = s[i][0] + s[i][1] + s[i][2];
		cout << r[i] << '\n';
	}

	return 0;
}