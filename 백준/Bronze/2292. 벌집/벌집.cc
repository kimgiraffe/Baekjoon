#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int n;
	scanf("%d", &n);
	int room = 1;
	int range = 1;
	int tmp = 1;
	while (1) {
		if (range >= n) {
			break;
		}
		tmp = 6 * (room++);
		range += tmp;
	}

	printf("%d\n", room);

	return 0;
}