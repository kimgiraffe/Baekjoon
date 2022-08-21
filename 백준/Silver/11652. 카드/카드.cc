#include <iostream>
#include <algorithm>

using namespace std;

long long c[100001];

int main(void)
{
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> c[i];
	}

	sort(c, c + N);

	int cnt = 1, max = 0, index = 0;

	for (int i = 0; i < N - 1; i++) {
		if (c[i] == c[i + 1]) {
			cnt++;
			if (cnt > max) {
				max = cnt;
				index = i;
			}
		}
		else {
			cnt = 1;
		}
	}

	cout << c[index];

	return 0;
}