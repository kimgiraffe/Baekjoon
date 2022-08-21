#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int n, ans;
	scanf("%d", &n);
	
	if (n % 5 == 0) // 5로 나누어 떨어지면 전부 5로
		ans = n / 5;
	else if (n % 5 == 1) // 6이 남는 꼴
		ans = n / 5 + 1;
	else if (n % 5 == 2 && n >= 12) // 12가 남는 꼴
		ans = n / 5 + 2;
	else if (n % 5 == 3) // 3이 남는 꼴
		ans = n / 5 + 1;
	else if (n % 5 == 4 && n >= 9) // 9가 남는 꼴
		ans = n / 5 + 2;
	else
		ans = -1;

	printf("%d\n", ans);
	
	return 0;
}