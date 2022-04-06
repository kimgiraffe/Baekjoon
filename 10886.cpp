#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int c[102] = { 0, };

int main(void)
{
	int N;
	scanf("%d", &N);
	int cnt = 0;
	for (int i = 0; i < N; i++) {
		scanf("%d", &c[i]);
		cnt += c[i];
	}
	if (cnt > (N / 2)) {
		printf("Junhee is cute!");
	}
	else {
		printf("Junhee is not cute!");
	}
	
	return 0;
}