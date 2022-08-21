#include<stdio.h>

int isPrime(int num) {
	if (num == 1) {
		return 0;
	}
	else if (num % 2 == 0 && num != 2) {
		return 0;
	}
	else if (num % 3 == 0 && num != 3) {
		return 0;
	}
	else if (num % 5 == 0 && num != 5) {
		return 0;
	}
	else if (num % 7 == 0 && num != 7) {
		return 0;
	}
	else if (num % 11 == 0 && num != 11) {
		return 0;
	}
	else if (num % 13 == 0 && num != 13) {
		return 0;
	}
	else if (num % 17 == 0 && num != 17) {
		return 0;
	}
	else if (num % 19 == 0 && num != 19) {
		return 0;
	}
	else if (num % 23 == 0 && num != 23) {
		return 0;
	}
	else if (num % 29 == 0 && num != 29) {
		return 0;
	}
	else if (num % 31 == 0 && num != 31) {
		return 0;
	}
	else if (num % 31 == 0 && num != 31) {
		return 0;
	}
	else if (num % 37 == 0 && num != 37) {
		return 0;
	}
	else if (num % 41 == 0 && num != 41) {
		return 0;
	}
	else if (num % 43 == 0 && num != 43) {
		return 0;
	}
	else if (num % 47 == 0 && num != 47) {
		return 0;
	}
	else if (num % 53 == 0 && num != 53) {
		return 0;
	}
	else if (num % 59 == 0 && num != 59) {
		return 0;
	}
	else if (num % 61 == 0 && num != 61) {
		return 0;
	}
	else if (num % 67 == 0 && num != 67) {
		return 0;
	}
	else if (num % 71 == 0 && num != 71) {
		return 0;
	}
	else if (num % 73 == 0 && num != 73) {
		return 0;
	}
	else if (num % 79 == 0 && num != 79) {
		return 0;
	}
	else if (num % 83 == 0 && num != 83) {
		return 0;
	}
	else if (num % 89 == 0 && num != 89) {
		return 0;
	}
	else if (num % 97 == 0 && num != 97) {
		return 0;
	}
	else {
		return 1;
	}
}

int main(void)
{
	int T;
	scanf("%d", &T);
	int n;
	for (int i = 0; i < T; i++) {
		scanf("%d", &n);
		for (int j = n / 2; j >= 1; j--) {
			if (isPrime(j) == 1 && isPrime(n - j) == 1) {
				
				printf("%d %d\n", j, n - j);
				break;
			}
		}
	}
	return 0;
}