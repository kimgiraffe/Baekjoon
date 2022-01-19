#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	long long int N, sum = 0;
	scanf("%lld", &N);
	int binary[1000] = { 0, };
	int position = 0;
	while (1) {
		binary[position] = N % 2;
		N /= 2;
		position++;
		if (N == 0)
			break;
	}

	for (int i = 0; i <= position-1; i++)
	{
		sum += (int)pow(2, (position-i-1))*binary[i];
	}
	
	printf("%lld", sum);
	
	return 0;
}