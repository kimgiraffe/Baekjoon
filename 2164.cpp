#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main(void)
{
	int N;
	scanf("%d", &N);

	queue<int> q;
	for (int i = 1; i <= N; i++) {
		q.push(i);
	}

	while (q.size() > 1)
	{
		q.pop();
		q.push(q.front());
		q.pop();
	}

	printf("%d", q.front());
	return 0;
}