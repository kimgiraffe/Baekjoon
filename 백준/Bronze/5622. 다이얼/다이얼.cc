#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[16];
	scanf("%s", str);
	int i, len = strlen(str), count = 0;
	for (i = 0; i < len; i++) {
		if (str[i] > 'V' && str[i] <= 'Z')
			count += 10;
		else if (str[i] > 'S' && str[i] <= 'V')
			count += 9;
		else if (str[i] > 'O' && str[i] <= 'S')
			count += 8;
		else if (str[i] > 'L' && str[i] <= 'O')
			count += 7;
		else if (str[i] > 'I' && str[i] <= 'L')
			count += 6;
		else if (str[i] > 'F' && str[i] <= 'I')
			count += 5;
		else if (str[i] > 'C' && str[i] <= 'F')
			count += 4;
		else if (str[i] >= 'A' && str[i] <= 'C')
			count += 3;
		
	}
	printf("%d\n", count);
	return 0;
}