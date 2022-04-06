#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int T;
	scanf("%d", &T); // 테스트 케이스 입력 
	for (int i = 0; i < T; i++) // 테스트 케이스에 따른 반복
	{
		int a, b;
		scanf("%d %d", &a, &b); // 데이터 수의 입력
		int task = a;
		for (int j = 1; j < b; j++) // 데이터 수의 제곱을 위한 반복문 구현
		{
			task = task * a % 10;  // 많은 수의 반복문이면 int를 초과할수 있어 나머지 연산 사용
		}
		if (task % 10 == 0) // 만약 10번째 컴퓨터일경우 
			printf("%d\n", 10);
		else //외 
			printf("%d\n", task % 10);
	}
}