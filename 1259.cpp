#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int check(int num)
{
	if (num < 10) {
		return 1;
	}
	else if (num >= 10 && num < 100) {
		if (num / 10 == num % 10)
			return 1;
		else
			return 0;
	}
	else if (num >= 100 && num < 1000) {
		if (num / 100 == num % 10)
			return 1;
		else
			return 0;
	}
	else if (num >= 1000 && num < 10000) {
		if (num / 1000 == num % 10 && (num % 1000) / 100 == (num % 100) / 10)
			return 1;
		else
			return 0;
	}
	else if (num >= 10000 && num < 100000) {
		if (num / 10000 == num % 10 && (num % 10000) / 1000 == (num % 100) / 10)
			return 1;
		else
			return 0;
	}
	else {
		return 0;
	}
}

int main(void)
{
	while (true) {
		int num;
		scanf("%d", &num);
		if (num == 0)
			break;
		else
			if (check(num) == 1)
				printf("yes\n");
			else
				printf("no\n");
	}

	return 0;
}