#include <iostream>
#include <queue>

using namespace std;

int arr[100000];

int main(void)
{
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	priority_queue<int> pq;
	for (int i = 0; i < N; i++) {
		pq.push(-arr[i]);
	}

	int ans = 0, compare_cnt = 0;

	while (pq.empty() == 0) {
		if (compare_cnt == N - 1) break;
		int n1 = -pq.top(); pq.pop();
		int n2 = -pq.top(); pq.pop();

		ans = ans + (n1 + n2);
		pq.push(-(n1 + n2));
		compare_cnt++;
	}
	cout << ans;

	return 0;
}