#include<stdio.h>

int main(void)
{
	int m, d;
	scanf("%d %d", &m, &d);
	int t;
	if (m == 1) {
		t = d - 1;
	}
	else if (m == 2) {
		t = 31 + d - 1;
	}
	else if (m == 3) {
		t = 31 + 28 + d - 1;
	}
	else if (m == 4) {
		t = 31 + 28 + 31 + d - 1;
	}
	else if (m == 5) {
		t = 31 + 28 + 31 + 30 + d - 1;
	}
	else if (m == 6) {
		t = 31 + 28 + 31 + 30 + 31 + d - 1;
	}
	else if (m == 7) {
		t = 31 + 28 + 31 + 30 + 31 + 30 + d - 1;
	}
	else if (m == 8) {
		t = 31 + 28 + 31 + 30 + 31 + 30 + 31 + d - 1;
	}
	else if (m == 9) {
		t = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + d - 1;
	}
	else if (m == 10) {
		t = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + d - 1;
	}
	else if (m == 11) {
		t = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + d - 1;
	}
	else if (m == 12) {
		t = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + d - 1;
	}

	if (t % 7 == 0) {
		printf("MON\n");
	}
	if (t % 7 == 1) {
		printf("TUE\n");
	}
	if (t % 7 == 2) {
		printf("WED\n");
	}
	if (t % 7 == 3) {
		printf("THU\n");
	}
	if (t % 7 == 4) {
		printf("FRI\n");
	}
	if (t % 7 == 5) {
		printf("SAT\n");
	}
	if (t % 7 == 6) {
		printf("SUN\n");
	}
	return 0;
}