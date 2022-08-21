#include<stdio.h>

int main(void)
{
	double r;
	scanf("%lf", &r);

	printf("%.6lf\n", r*r*3.14159265359);
	printf("%.6lf\n", r*r*2);
	return 0;
}