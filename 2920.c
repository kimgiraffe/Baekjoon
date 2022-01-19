#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int arr[9] = { 0, };

int main(void)
{
	int i, flag = 0;
	for (i = 0; i < 8; i++) {
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < 8; i++) {
		if (arr[i] == i + 1)
			flag++;
		else if (arr[i] == 8 - i)
			flag--;
		else
			flag = 0;
	}
	if (flag == 8) {
		printf("ascending");
	}
	else if (flag == -8) {
		printf("descending");
	}
	else {
		printf("mixed");
	}
	return 0;
}