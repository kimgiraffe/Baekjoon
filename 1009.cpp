#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int T;
	scanf("%d", &T); // �׽�Ʈ ���̽� �Է� 
	for (int i = 0; i < T; i++) // �׽�Ʈ ���̽��� ���� �ݺ�
	{
		int a, b;
		scanf("%d %d", &a, &b); // ������ ���� �Է�
		int task = a;
		for (int j = 1; j < b; j++) // ������ ���� ������ ���� �ݺ��� ����
		{
			task = task * a % 10;  // ���� ���� �ݺ����̸� int�� �ʰ��Ҽ� �־� ������ ���� ���
		}
		if (task % 10 == 0) // ���� 10��° ��ǻ���ϰ�� 
			printf("%d\n", 10);
		else //�� 
			printf("%d\n", task % 10);
	}
}