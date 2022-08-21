#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[101] = { NULL };
	int i, j;
	int count[26] = { 0, };
	fgets(str, sizeof(str), stdin);

	
	for (i = 'a'; i <= 'z'; i++) {
		for (j = 0; j < 100; j++) {
			if (i == str[j]) {
				count[i - 'a'] = j + 1;
				break;
			}
		}
	}
	for (int i = 0; i < 26; i++)
	{
		printf("%d ", count[i] - 1);
	}

	return 0;
}