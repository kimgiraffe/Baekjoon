#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int arr[101] = { 0, };

int main(void)
{
	int N, v, count = 0;
	scanf("%d", &N);
	for (int i = 1; i <= N; i++)
	{
		scanf("%d", &arr[i]);
	}
	scanf("%d", &v);
	for (int i = 1; i <= N; i++)
	{
		if (arr[i] == v)
			count++;
	}

	printf("%d\n", count);
	return 0;
}