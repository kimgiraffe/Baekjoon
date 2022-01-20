#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
	int N, K;
	queue<int> q;
	scanf("%d %d", &N, &K);

	for (int i = 1; i <= N; i++) {
		q.push(i);
	}

	printf("<");
	while (!q.empty()) {
		for (int i = 0; i < K - 1; i++) {
			q.push(q.front());
			q.pop();
		}
		printf("%d", q.front());
		q.pop();

		if (!q.empty()) {
			printf(", ");
		}
	}
	printf(">\n");
	return 0;
}