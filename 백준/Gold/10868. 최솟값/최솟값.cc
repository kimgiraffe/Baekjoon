#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<long long> a(100'000);
vector<long long> MinTree(400'000);

long long init(vector<long long> &arr, vector<long long> &tree, int node, int start, int end)
{
	if (start == end) return tree[node] = a[start];
	int mid = (start + end) / 2;
	return tree[node] = min(init(arr, tree, 2 * node, start, mid), init(arr, tree, 2 * node + 1, mid + 1, end));
}

long long queryMin(vector<long long> &tree, int node, int start, int end, int l, int r)
{
	if (end < l || r < start) return 1e9 + 1;
	if (l <= start && end <= r) return tree[node];
	int mid = (start + end) / 2;
	return min(queryMin(tree, 2 * node, start, mid, l, r), queryMin(tree, 2 * node + 1, mid + 1, end, l, r));
}


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	// freopen("input.txt", "r", stdin);

	long long n, q;
	cin >> n >> q;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	init(a, MinTree, 1, 0, n - 1);
	for (int i = 0; i < q; i++) {
		long long t2, t3;
		cin >> t2 >> t3;
		cout << queryMin(MinTree, 1, 0, n - 1, t2 - 1, t3 - 1) << '\n';
	}

}