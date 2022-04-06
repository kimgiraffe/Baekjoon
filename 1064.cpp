#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>

double dist(int x1, int y1, int x2, int y2)
{
	 return sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
}

int main(void)
{
	int xA, yA, xB, yB, xC, yC;
	scanf("%d %d %d %d %d %d", &xA, &yA, &xB, &yB, &xC, &yC);
	double d1= dist(xA, yA, xB, yB);
	double d2 = dist(xA, yA, xC, yC);
	double d3 = dist(xB, yB, xC, yC);
	double min, max;
	min = (d1 <= d2 && d1 <= d3) ? d1 :
		(d2 <= d1 && d2 <= d3) ? d2 : d3;
	max = (d1 >= d2 && d1 >= d3) ? d1 :
		(d2 >= d1 && d2 >= d3) ? d2 : d3;

	double res = 2.0*(max - min);


	if ((xB - xA)*(yC - yA) == (yB - yA)*(xC - xA))
		printf("-1");
	else
		printf("%.10lf", res);
	return 0;
}