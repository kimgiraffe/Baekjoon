#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int N, L;
int arr[5000001];

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> L;
	for (int i = 1; i <= N; i++)
		cin >> arr[i];	

	deque<pair<int, int>> dq;
	for (int i = 1; i <= N; i++) {
		if (dq.empty() == false) {
			if (dq.front().second < i - L + 1) dq.pop_front();
		}
		while (dq.empty() == false && dq.back().first > arr[i]) dq.pop_back();
		dq.push_back(make_pair(arr[i], i));
		cout << dq.front().first << " ";
	}
	cout << '\n';

	return 0;
}