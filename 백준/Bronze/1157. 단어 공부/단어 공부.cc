#include <stdio.h>
#include <string.h>
char str[1000000];
int alphabet[26] = { 0, };

int main(void)
{
	scanf("%s", str);
	int i, len;
	len = strlen(str);
	for (i = 0; i < len; i++) {
		if (str[i] >= 'a')
			str[i] -= 32;
		alphabet[str[i] - 'A']++;
	}
	int max = 0;
	char c = '?'; 
	for (i = 0; i < 26; i++) {
		if (max < alphabet[i]) {
			max = alphabet[i];
			c = i;
		}
		else {
			if (alphabet[i] == max)
				c = '?';
		}
	}
	printf("%c\n", (c=='?')? '?' : c + 'A');

	return 0;
}