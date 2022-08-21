#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char ch[2];
	ch[1] = '\0';
	int N, i, sum = 0;
	scanf("%d\n", &N);
	for (i = 0; i < N; i++) {
		ch[0] = getchar();
		sum += atoi(ch);
	}
	printf("%d", sum);
	return 0;
}