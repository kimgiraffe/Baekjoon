#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
����
���Դ� ������ �ϴٰ� ������ �ϰ�;�����.

���� �� ���� ������ �ڿ�, �̸� ������������ �����ϰ� �;� ����.

���� �� ���� �־����� ��, ���� ���� ��, �� ���� ��, ���� ū ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
���� �� ���� �־�����. �� ���ڴ� 1���� ũ�ų� ����, 1,000,000���� �۰ų� ����. �� ���ڴ� ��� �ٸ���.

���
���� ���� ��, �� ���� ��, ���� ū ���� ���ʴ�� ����Ѵ�.
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