#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/*
문제
알파벳 소문자로만 이루어진 단어 S가 주어진다. 각 알파벳이 단어에 몇 개가 포함되어 있는지 구하는 프로그램을 작성하시오.

입력
첫째 줄에 단어 S가 주어진다. 단어의 길이는 100을 넘지 않으며, 알파벳 소문자로만 이루어져 있다.

출력
단어에 포함되어 있는 a의 개수, b의 개수, …, z의 개수를 공백으로 구분해서 출력한다
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