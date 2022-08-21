#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int T;
	bool a[101] = { false, };
	for (int i = 1; i <= 100; ++i) {
		if (i == 1 || i == 4 || i == 9 || i == 16 || i == 25 || i == 36 || i == 49 || i == 64 || i == 81 || i == 100) {
			a[i] = true;
		}
	}
	scanf("%d", &T);
	for (int i = T; i != 0; --i) {
		int n, cnt = 0;
		scanf("%d", &n);
		for (int i = 1; i <= n; ++i) {
			if (a[i] == true) cnt++;
		}
		printf("%d\n", cnt);
	}

	return 0;
}