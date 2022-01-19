#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct date {
	int year, month, day;
};

bool isLeap(int y) {
	if (y % 4 != 0) return false;
	if (y % 100 != 0) return true;
	if (y % 400 == 0) return true;
	return false;
}

int mon[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

int cal(int y, int m, int d) {
	int r = 0;
	for (int i = 0; i < y; i++) {
		r += 365 + isLeap(i);
	}
	for (int i = 0; i + 1 < m; i++) {
		if (i == 1) r += isLeap(y);
		r += mon[i];
	}
	return r + d;
}

int main(void)
{
	struct date today;
	struct date Dday;
	scanf("%d %d %d", &today.year, &today.month, &today.day);
	scanf("%d %d %d", &Dday.year, &Dday.month, &Dday.day);

	if (Dday.year - today.year >= 1000 && cal(0, today.month, today.day) <= cal(0, Dday.month, Dday.day))
		printf("gg");
	else {
		int r1 = cal(today.year, today.month, today.day);
		int r2 = cal(Dday.year, Dday.month, Dday.day);
		printf("D-%d", r2 - r1);
	}
	return 0;
}