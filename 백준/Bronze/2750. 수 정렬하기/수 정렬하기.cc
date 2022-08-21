#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int N;
	scanf("%d", &N);

    int i, j, temp, arr[1000] = { 0, };
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = N-1; i > 0; i--) {
        for (j = 0; j < i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
  
    for (i = 0; i < N; i++) {
        printf("%d\n", arr[i]);
    }

	return 0;
}