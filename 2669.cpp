#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int g[101][101];

struct coordinate {
	int x1, y1, x2, y2;
};

void init()
{
	for (int i = 0; i <= 100; i++) {
		for (int j = 0; j <= 100; j++) {
			g[i][j] = 0;
		}
	}
}

void cal(int a1, int b1, int a2, int b2)
{
	for (int i = a1; i < a2; i++) {
		for (int j = b1; j < b2; j++) {
			g[i][j]++;
		}
	}
}

int main(void)
{
	struct coordinate r1;
	struct coordinate r2;
	struct coordinate r3;
	struct coordinate r4;
	int res = 0;
	scanf("%d %d %d %d", &r1.x1, &r1.y1, &r1.x2, &r1.y2);
	scanf("%d %d %d %d", &r2.x1, &r2.y1, &r2.x2, &r2.y2);
	scanf("%d %d %d %d", &r3.x1, &r3.y1, &r3.x2, &r3.y2);
	scanf("%d %d %d %d", &r4.x1, &r4.y1, &r4.x2, &r4.y2);
	init();
	cal(r1.x1, r1.y1, r1.x2, r1.y2);
	cal(r2.x1, r2.y1, r2.x2, r2.y2);
	cal(r3.x1, r3.y1, r3.x2, r3.y2);
	cal(r4.x1, r4.y1, r4.x2, r4.y2);

	for (int i = 1; i <= 100; i++) {
		for (int j = 1; j <= 100; j++) {
			if (g[i][j] > 0)
				res++;
		}
	}
	printf("%d", res);
	return 0;
}