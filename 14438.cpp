#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

void init(vector<int> &a, vector<int> &tree, int node, int start, int end) {
	if (start == end) {
		tree[node] = a[start];
	}
	else {
		init(a, tree, node * 2, start, (start + end) / 2);
		init(a, tree, node * 2 + 1, (start + end) / 2 + 1, end);
		tree[node] = min(tree[node * 2], tree[node * 2 + 1]);
	}
}
void update(vector<int> &a, vector<int> &tree, int node, int start, int end, int index, int val) {
	if (index < start || index > end) {
		return;
	}
	if (start == end) {
		a[index] = val;
		tree[node] = val;
		return;
	}
	update(a, tree, node * 2, start, (start + end) / 2, index, val);
	update(a, tree, node * 2 + 1, (start + end) / 2 + 1, end, index, val);
	tree[node] = min(tree[node * 2], tree[node * 2 + 1]);
}
int query(vector<int> &tree, int node, int start, int end, int left, int right) {
	if (left > end || right < start) {
		return -1;
	}
	if (left <= start && end <= right) {
		return tree[node];
	}
	int lmin = query(tree, node * 2, start, (start + end) / 2, left, right);
	int rmin = query(tree, node * 2 + 1, (start + end) / 2 + 1, end, left, right);
	if (lmin == -1) {
		return rmin;
	}
	else if (rmin == -1) {
		return lmin;
	}
	else {
		return min(lmin, rmin);
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<int> a(n);
	int h = (int)ceil(log2(n));
	int tree_size = (1 << (h + 1));
	vector<int> tree(tree_size);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	init(a, tree, 1, 0, n - 1);
	int m;
	cin >> m;
	while (m--) {
		int Q;
		cin >> Q;
		if (Q == 1) {
			int index, val;
			cin >> index >> val;
			update(a, tree, 1, 0, n - 1, index - 1, val);
		}
		else if (Q == 2) {
			int left, right;
			cin >> left >> right;
			cout << query(tree, 1, 0, n - 1, left - 1, right - 1) << '\n';
		}
	}
	return 0;
}