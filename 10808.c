#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/*
����
���ĺ� �ҹ��ڷθ� �̷���� �ܾ� S�� �־�����. �� ���ĺ��� �ܾ �� ���� ���ԵǾ� �ִ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� �ܾ� S�� �־�����. �ܾ��� ���̴� 100�� ���� ������, ���ĺ� �ҹ��ڷθ� �̷���� �ִ�.

���
�ܾ ���ԵǾ� �ִ� a�� ����, b�� ����, ��, z�� ������ �������� �����ؼ� ����Ѵ�
*/

char alp[26] = { 0, };
int cnt[26] = { 0, };

int main(void)
{
	char str[101];
	scanf("%s", str);
	
	int len;
	len = strlen(str);

	for (int n = 0; n < 26; n++) {
		alp[n] = n + 'a';
	}

	
	for(int i = 0; i < len; i++) {
		for (int j = 0; j < 26; j++) {
			if (str[i] == alp[j]) {
				cnt[j]++;
			}
		}
	}

	for (int k = 0; k < 26; k++)
		printf("%d ", cnt[k]);
}