#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int K;
int arr[14] = { 0, };
int ans[6];

void dfs(int start, int depth) {
	if (depth == 6) {
		for (int i = 0; i < 6; i++) {
			printf("%d ", ans[i]);
		}
		printf("\n");
		return;
	}

	for (int i = start; i < K; i++) {
		ans[depth] = arr[i];
		dfs(i + 1, depth + 1);
	}
}
int main(void)
{
	while (1) {
		scanf("%d", &K);
		if (K == 0)
			break;
		else {
			for (int i = 0; i < K; i++) {
				scanf("%d", &arr[i]);
			}
			dfs(0, 0);
			printf("\n");
		}
	}

	return 0;
}