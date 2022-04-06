#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

struct point {
	int x, y;
};

bool checkTriangle(point a, point b, point c)
{
	if ((b.x - a.x)*(c.y - a.y) == (b.y - a.y)*(c.x - a.x))
		return false;
	return true;
}

bool checkJungTriangle(point a, point b, point c)
{
	int ab = (b.x - a.x)*(b.x - a.x) + (b.y - a.y)*(b.y - a.y);
	int bc = (c.x - b.x)*(c.x - b.x) + (c.y - b.y)*(c.y - b.y);
	int ca = (a.x - c.x)*(a.x - c.x) + (a.x - c.x)*(a.x - c.x);
	if (ab == bc && bc == ca)
		return true;
	return false;
}

bool check2Triangle(point a, point b, point c)
{
	int ab = (b.x - a.x)*(b.x - a.x) + (b.y - a.y)*(b.y - a.y);
	int bc = (c.x - b.x)*(c.x - b.x) + (c.y - b.y)*(c.y - b.y);
	int ca = (a.x - c.x)*(a.x - c.x) + (a.y - c.y)*(a.y - c.y);

	if (ab == bc || bc == ca || ca == ab)
		return true;
	return false;
}

int DotProduct(int x1, int y1, int x2, int y2)
{
	return x1 * x2 + y1 * y2;
}

int main(void)
{
	point a, b, c;
	scanf("%d %d %d %d %d %d", &a.x, &a.y, &b.x, &b.y, &c.x, &c.y);

	if (checkTriangle(a, b, c) == false) {
		printf("X");
	}
	else if (checkJungTriangle(a, b, c) == true) {
		printf("JungTriangle");
	}
	else if (check2Triangle(a, b, c) == true) {
		if (DotProduct(b.x - a.x, b.y - a.y, c.x - a.x, c.y - a.y) < 0)
			printf("Dunkak2Triangle");
		else if (DotProduct(a.x - b.x, a.y - b.y, c.x - b.x, c.y - b.y) < 0)
			printf("Dunkak2Triangle");
		else if (DotProduct(a.x - c.x, a.y - c.y, b.x - c.x, b.y - c.y) < 0)
			printf("Dunkak2Triangle");
		else if (DotProduct(b.x - a.x, b.y - a.y, c.x - a.x, c.y - a.y) == 0)
			printf("Jikkak2Triangle");
		else if (DotProduct(a.x - b.x, a.y - b.y, c.x - b.x, c.y - b.y) == 0)
			printf("Jikkak2Triangle");
		else if (DotProduct(a.x - c.x, a.y - c.y, b.x - c.x, b.y - c.y) == 0)
			printf("Jikkak2Triangle");
		else
			printf("Yeahkak2Triangle");
	}
	else {
		if (DotProduct(b.x - a.x, b.y - a.y, c.x - a.x, c.y - a.y) < 0)
			printf("DunkakTriangle");
		else if (DotProduct(a.x - b.x, a.y - b.y, c.x - b.x, c.y - b.y) < 0)
			printf("DunkakTriangle");
		else if (DotProduct(a.x - c.x, a.y - c.y, b.x - c.x, b.y - c.y) < 0)
			printf("DunkakTriangle");
		else if (DotProduct(b.x - a.x, b.y - a.y, c.x - a.x, c.y - a.y) == 0)
			printf("JikkakTriangle");
		else if (DotProduct(a.x - b.x, a.y - b.y, c.x - b.x, c.y - b.y) == 0)
			printf("JikkakTriangle");
		else if (DotProduct(a.x - c.x, a.y - c.y, b.x - c.x, b.y - c.y) == 0)
			printf("JikkakTriangle");
		else
			printf("YeahkakTriangle");
	}

	return 0;
}