#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>

using namespace std;

vector<int> a(100'000);
vector<int> MinTree(400'000);
vector<int> MaxTree(400'000);

int init(vector<int> &arr, vector<int> &tree, int node, int start, int end)
{
	if (start == end) return tree[node] = a[start];
	int mid = (start + end) / 2;
	return tree[node] = min(init(arr, tree, 2 * node, start, mid), init(arr, tree, 2 * node + 1, mid + 1, end));
}

int init2(vector<int> &arr, vector<int> &tree, int node, int start, int end)
{
	if (start == end) return tree[node] = a[start];
	int mid = (start + end) / 2;
	return tree[node] = max(init2(arr, tree, 2 * node, start, mid), init2(arr, tree, 2 * node + 1, mid + 1, end));
}

int updateMin(vector<int> &tree, int node, int start, int end, int index, int value)
{
	if (index < start || end < index) return tree[node];
	if (start == end) return tree[node] = value;
	int mid = (start + end) / 2;
	return tree[node] = min(updateMin(tree, 2 * node, start, mid, index, value), updateMin(tree, 2 * node + 1, mid + 1, end, index, value));
}

int updateMax(vector<int> &tree, int node, int start, int end, int index, int value)
{
	if (index < start || end < index) return tree[node];
	if (start == end) return tree[node] = value;
	int mid = (start + end) / 2;
	return tree[node] = max(updateMax(tree, 2 * node, start, mid, index, value), updateMax(tree, 2 * node + 1, mid + 1, end, index, value));
}

int queryMin(vector<int> &tree, int node, int start, int end, int l, int r)
{
	if (end < l || r < start) return INT_MAX;
	if (l <= start && end <= r) return tree[node];
	int mid = (start + end) / 2;
	return min(queryMin(tree, 2 * node, start, mid, l, r), queryMin(tree, 2 * node + 1, mid + 1, end, l, r));
}

int queryMax(vector<int> &tree, int node, int start, int end, int l, int r)
{
	if (end < l || r < start) return -1;
	if (l <= start && end <= r) return tree[node];
	int mid = (start + end) / 2;
	return max(queryMax(tree, 2 * node, start, mid, l, r), queryMax(tree, 2 * node + 1, mid + 1, end, l, r));
}


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	// freopen("input.txt", "r", stdin);

	int n, q;
	cin >> n >> q;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	init(a, MinTree, 1, 0, n - 1);
	init2(a, MaxTree, 1, 0, n - 1);
	for (int i = 0; i < q; i++) {
		int t2, t3;
		cin >> t2 >> t3;
		cout << queryMin(MinTree, 1, 0, n - 1, t2 - 1, t3 - 1) << " " << queryMax(MaxTree, 1, 0, n - 1, t2 - 1, t3 - 1) << '\n';
	}
	
}