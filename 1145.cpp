#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n[6] = { 0, };

int main(void)
{
	int i, j = 1;
	for (i = 1; i <= 5; i++) {
		scanf("%d", &n[i]);
	}
	while(true) {
		int cnt = 0;
		for (i = 1; i <= 5; i++) {
			if (j >= n[i] && j % n[i] == 0)
				cnt++;
		}
		if (cnt >= 3) {
			printf("%d", j);
			break;
		}
		j++;
	}

	return 0;
}