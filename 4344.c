#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
����
���л� ��������� 90%�� �ڽ��� �ݿ��� ����� �Ѵ´ٰ� �����Ѵ�. ����� �׵鿡�� ���� ������ �˷���� �Ѵ�.

�Է�
ù° �ٿ��� �׽�Ʈ ���̽��� ���� C�� �־�����.

��° �ٺ��� �� �׽�Ʈ ���̽����� �л��� �� N(1 �� N �� 1000, N�� ����)�� ù ���� �־�����, �̾ N���� ������ �־�����. ������ 0���� ũ�ų� ����, 100���� �۰ų� ���� �����̴�.

���
�� ���̽����� �� �پ� ����� �Ѵ� �л����� ������ �ݿø��Ͽ� �Ҽ��� ��° �ڸ����� ����Ѵ�.
*/

int main() {

	int C = 0, N = 0;
	scanf("%d", &C);

	for (int i = 0; i < C; i++) {
		scanf("%d", &N);
		int score[1000], sum = 0;
		double avg = 0.00;
		for (int j = 0; j < N; j++) {
			scanf("%d", &score[j]);
			sum += score[j];
		}

		avg = (double)sum / N;
		int count = 0;
		for (int j = 0; j < N; j++) {
			if (avg < score[j])
				count++;
		}
		printf("%.3f%%\n", (double)count * 100 / N);
	}
	return 0;
}