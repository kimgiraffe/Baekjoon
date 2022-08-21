#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int T, H, W, N;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d %d %d", &H, &W, &N);
		if (N % H == 0) {
			if (N / H < 10) {
				printf("%d0%d\n", H, N / H);
			}
			else {
				printf("%d%d\n", H, N / H);
			}
		}
		else {
			if (H < N) {
				if ((N - H) / H + 2 < 10) {
					printf("%d0%d\n", (N % H), (N - H) / H + 2);
				}
				else {
					printf("%d%d\n", (N % H), (N - H) / H + 2);
				}
			}
			else {
				printf(("%d01\n"), N);
			}
		}
	}

	return 0;
}