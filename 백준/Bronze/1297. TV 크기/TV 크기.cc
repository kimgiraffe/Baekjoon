#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <cmath>
int main(void)
{
	int D, H, W;
	scanf("%d %d %d", &D, &H, &W);

	double x = sqrt((double)(D*D) / (H*H + W * W));

	int height = floor(H * x);
	int width = floor(W * x);

	printf("%d %d", height, width);

	return 0;
}