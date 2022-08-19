#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int HanSu(int num)
{
	int d1, d2, d3, d4;
	
	d1 = num % 10;
	d2 = (num % 100) / 10;
	d3 = (num % 1000) / 100;
	d4 = num / 1000;
	if (num < 100) {
		return 1;
	}
	else if (num < 1000)
		if (d1 - d2 == d2 - d3) {
			return 1;
		}
		else {
			return 0;
		}
	else
		return 0;
	
}

int main(void)
{
	int N, i, count = 0;
	scanf("%d", &N);
	for (i = 1; i <= N; i++) {
		if (HanSu(i) == 1)
			count++;
	}
	printf("%d\n", count);

	return 0;
}