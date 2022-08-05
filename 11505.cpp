#include <iostream>
#include <cmath>

using namespace std;

constexpr int MOD = 1'000'000'007;
long long arr[1000001];
long long *tree;

long long init(int node, int start, int end) {
	if (start == end) return tree[node] = arr[start];
	int mid = start + (end - start) / 2;
	return tree[node] = (init(2 * node, start, mid) * init(2 * node + 1, mid + 1, end)) % MOD;
}

long long mul(int node, int start, int end, int left, int right) {
	if (left > end || right < start) return 1;
	if (left <= start && end <= right) return tree[node];
	int mid = start + (end - start) / 2;
	return (mul(node * 2, start, mid, left, right)*mul(node * 2 + 1, mid + 1, end, left, right)) % MOD;
}

long long update(int node, int start, int end, int idx, long long val) {
	if (idx > end || idx < start) return tree[node];
	if (start == end) return tree[node] = val;
	int mid = start + (end - start) / 2;
	return tree[node] = (update(2 * node, start, mid, idx, val)*update(2 * node + 1, mid + 1, end, idx, val)) % MOD;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int num, m, k, height, a;
	long long b, c, big, small;
	cin >> num >> m >> k;
	height = ceil(log2(num));
	tree = new long long[1 << (height + 1)];
	for (int i = 0; i < num; i++)
		cin >> arr[i];

	init(1, 0, num - 1);
	for (int i = 0; i < m + k; i++) {
		cin >> a >> b >> c;
		if (a == 1) {
			arr[b - 1] = c;
			update(1, 0, num - 1, b - 1, c);
		}
		else {
			big = b > c ? b : c;
			small = b > c ? c : b;
			cout << mul(1, 0, num - 1, small - 1, big - 1) << '\n';
		}
	}
	return 0;
}