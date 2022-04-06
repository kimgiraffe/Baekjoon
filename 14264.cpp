#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	double L;
	scanf("%lf", &L);
	double S;
	S = L * L * sqrt(3) / 4;
	printf("%.10lf", S);


}