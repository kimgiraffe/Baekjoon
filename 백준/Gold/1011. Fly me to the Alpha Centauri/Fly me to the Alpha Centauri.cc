#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Fly(long long n1, long long n2)
{
	long long d = n2 - n1;
	long long tmp = 0;
	while (1) {
		if (d <= tmp * (tmp + 1)) {
			break;
		}
		tmp++;
	}
	if (d <= tmp * tmp)
		printf("%lld\n", tmp * 2 - 1);
	else
		printf("%lld\n", tmp * 2);
}

int main(void)
{
	int T;
	scanf("%d", &T);
	while (T--)
	{
		long long x, y;
		scanf("%lld %lld", &x, &y);
		Fly(x, y);

	}

	return 0;
}