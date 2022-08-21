#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int N;
	int m[13] = {0, 31,28,31,30,31,30,31,31,30,31,30,31 };
	scanf("%d", &N);
	int year = 2014, month = 4, day = 2;
	day = 1;
	N += 1;

	while (1) {
		if (N == 0) {
			break;
		}
		if (N > m[month]) {
			N -= m[month];
			month++;
		}
		else {
			day = N;
			N = 0;
		}
		if (month == 13) {
			year++;
			month = 1;
			if (year % 4 == 0 && year % 100 != 0)
				m[2] = 29;
			else if (year % 400 == 0)
				m[2] = 29;
			else
				m[2] = 28;
		}
	}

	if (month > 9 && day > 9) {
		printf("%d-%d-%d\n", year, month, day);
	}
	else if (month > 9) {
		printf("%d-%d-0%d\n", year, month, day);
	}
	else if (day > 9) {
		printf("%d-0%d-%d\n", year, month, day);
	}
	else {
		printf("%d-0%d-0%d\n", year, month, day);
	}

	return 0;
}