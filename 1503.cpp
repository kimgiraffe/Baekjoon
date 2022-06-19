#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	bool arr[1002] = { false, };
	vector<int> v;
	cin >> N >> M;

	for (int i = 0; i < M; i++) {
		int a;
		cin >> a;
		arr[a] = true;
	}

	for (int i = 1; i < 1002; i++) {
		if (!arr[i]) v.push_back(i);
	}

	int result = 2147483647;
	int sz = v.size();
	for (int i = 0; i < sz; i++) {
		for (int j = 0; j < sz; j++) {
			for (int k = 0; k < sz; k++) {
				int q = v[i] * v[j] * v[k];
				if (abs(N - q) < result) result = abs(N - q);
				if (N + 1 < q) break;
			}
		}
	}
	cout << result;
	return 0;
}