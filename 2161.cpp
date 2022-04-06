#include <iostream>
#include <deque>

using namespace std;

int main(void)
{
	int N;
	cin >> N;
	deque<int> q;

	for (int i = 1; i <= N; i++) {
		q.push_back(i);
	}

	for (int i = 0; i < N - 1; i++) {
		cout << q.front() << " ";
		q.pop_front();
		q.push_back(q.front());
		q.pop_front();
	}
	cout << q.front();
	return 0;
}