#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M, cnt = 0;
	string s;
	cin >> N >> M;
	cin >> s;

	for (int i = 0; i < M; ++i) {
		int k = 0;
		if (s[i] == 'O') continue;
		else {
			while (s[i + 1] == 'O' && s[i + 2] == 'I') {
				k++;
				if (k == N) {
					k--;
					cnt++;
				}
				i += 2;
			}
			k = 0;
		}
	}

	cout << cnt;

	return 0;
}