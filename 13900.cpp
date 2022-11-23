#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>

using namespace std;

constexpr int MAX = 100'000;

vector<int> v;
long long sum[MAX] = {};
long long res = 0;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	// freopen("input.txt", "r", stdin);

	int n;
	cin >> n;

	for (int i = 1; i <= n; ++i) {
		int tmp;
		cin >> tmp;
		v.push_back(tmp);
	}

	sum[0] = v[0];

	for (int i = 1; i < n; ++i) {
		sum[i] = sum[i - 1] + v[i];
	}

	for (int i = 0; i < n - 1; ++i) {
		res += v[i] * (sum[n - 1] - sum[i]);
	}

	cout << res;

	return 0;
}