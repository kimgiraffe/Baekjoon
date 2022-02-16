#include <iostream>
#include <queue>

using namespace std;

int main(void)
{
	int N, K, tmp;

	cin >> N >> K;

	queue<int> q;

	for (int i = 1; i <= N; i++) {
		q.push(i);
	}

	cout << "<";
	while (1) {
		for (int i = 0; i < K - 1; i++) {
			tmp = q.front();
			q.pop();
			q.push(tmp);
		}
		cout << q.front();
		q.pop();
		if (!q.size()) {
			break;
		}
		cout << ", ";
	}
	cout << ">";

	return 0;
}