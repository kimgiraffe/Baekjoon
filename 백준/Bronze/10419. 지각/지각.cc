#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int Late(int num) {
	double x = sqrt(1 + 4 * num);
	int result = (int)((-1 + x)/2);

	return result;
}


int main(void)
{
	int T, d;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d", &d);
		printf("%d\n", Late(d));
	}
	

	return 0;
}