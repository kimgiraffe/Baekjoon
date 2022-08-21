#include<stdio.h>

int main(void)
{
	char a[100];
	int i, count = 0;
	for (i = 0; i < 100; i++)
	{
		scanf("%c", &a[i]);
		if (a[i] == '\n')
			break;
	}
	printf("%d\n", i);

	
}