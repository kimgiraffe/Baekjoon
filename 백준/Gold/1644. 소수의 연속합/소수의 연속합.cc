#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int arr[4000001];

int main(void)
{

	int N;
	cin >> N;

	if (N == 1) {
		cout << 0;
		return 0;
	}

	for (int i = 2; i <= N; i++) {
		arr[i] = i;
	}

	for (int i = 2; i <= 4000000; i++) {
		for (int j = i + i; j <= 4000000; j += i) {
			arr[j] = 0;
		}
	}
	vector<int> v;
	for (int i = 2; i <= N; i++) {
		if (!arr[i])
			continue;
		v.push_back(arr[i]);
	}
	int l = 0, r = 0, sum = v[0], cnt = 0;
	while (l <= r && l < v.size() && r < v.size()) {
		if (sum < N) {
			r++;
			if (r == v.size()) {
				break;
			}
			sum += v[r];
		}
		else if (sum == N) {
			cnt++;
			sum -= v[l];
			l++;
		}
		else {
			sum -= v[l];
			l++;
		}
	}

	cout << cnt;

	return 0;
}