#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	int K, N;
	int s[101];
	cin >> K;
	for (int i = 0; i < K; i++) {
		cin >> N;
		for (int j = 0; j < N; j++) {
			cin >> s[j];
		}
		sort(s, s + N);
		int d[101];
		for (int k = 0; k < N - 1; k++) {
			d[k] = s[k + 1] - s[k];
		}
		sort(d, d + N - 1);
		cout << "Class " << i + 1 << '\n';
		cout << "Max " << s[N - 1] << ", Min " << s[0] << ", Largest gap " << d[N-2] << '\n';
	}


	return 0;
}