#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int cnt = 0;
	vector<int> v;
	int N;
	cin >> N;
	for (int i = N; i != 0; --i) {
		int num;
		cin >> num;
		v.push_back(num);
	}
	for (int i = 0; i < N; ++i) {
		if (v[i] == N - i) {
			cnt++;
		}
	}
	if (cnt == N) {
		cout << -1;
	}
	else {
		while (next_permutation(v.begin(), v.end())) {
			for (int idx : v) {
				cout << idx << ' ';
			}
			cout << '\n';
			return 0;
		}
	}
	return 0;
}