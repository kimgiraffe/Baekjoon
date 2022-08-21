#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
문제
동규는 세수를 하다가 정렬이 하고싶어졌다.

숫자 세 개를 생각한 뒤에, 이를 오름차순으로 정렬하고 싶어 졌다.

숫자 세 개가 주어졌을 때, 가장 작은 수, 그 다음 수, 가장 큰 수를 출력하는 프로그램을 작성하시오.

입력
숫자 세 개가 주어진다. 이 숫자는 1보다 크거나 같고, 1,000,000보다 작거나 같다. 이 숫자는 모두 다르다.

출력
제일 작은 수, 그 다음 수, 제일 큰 수를 차례대로 출력한다.
*/

int main(void) {

	int n1, n2, n3;
	scanf("%d %d %d", &n1, &n2, &n3);

	if (n1 > n2) {
		if (n2 > n3) {
			printf("%d %d %d", n3, n2, n1);
		}
		else {
			if (n1 > n3) {
				printf("%d %d %d", n2, n3, n1);
			}
			else {
				printf("%d %d %d", n2, n1, n3);
			}
		}
	}
	else {
		if (n1 > n3) {
			printf("%d %d %d", n3, n1, n2);
		}
		else {
			if (n2 < n3)
				printf("%d %d %d", n1, n2, n3);
			else {
				printf("%d %d %d", n1, n3, n2);
			}
		}
	}


	return 0;
}