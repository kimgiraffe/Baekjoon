#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {

	int T, score, sum;
	char test[80];

	scanf("%d", &T);

	while(T--) {
		sum = 0;
		score = 1;
		scanf("%s", test);
		for (int j = 0; j<strlen(test); j++) {
			if (test[j] == 'O') {
				sum += score;
				score++;
			}
			if (test[j] == 'X')  score = 1;
		}
		printf("%d\n", sum);
	}
}