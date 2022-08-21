#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int T;
	scanf("%d", &T);
	while (T--) {
		double N;
		char s;
		scanf("%lf", &N);
		
		while(1) {
			scanf("%c", &s);
			if (s == '@')
				N *= 3;
			if (s == '%')
				N += 5;
			if (s == '#')
				N -= 7;
			if (s == '\n')
				break;
			else
				continue;
		}
		printf("%.2lf\n", N);
	}

	return 0;
}