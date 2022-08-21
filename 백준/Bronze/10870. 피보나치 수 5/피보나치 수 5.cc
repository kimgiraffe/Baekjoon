#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int Fib(int num)
{
	if (num == 0) {
		return 0;
	}
	else if (num == 1) {
		return 1;
	}
	else {
		return Fib(num - 1) + Fib(num - 2);
	}

}

int main(void)
{
	int N;
	scanf("%d", &N);
	
	printf("%d\n", Fib(N));

	return 0;
}