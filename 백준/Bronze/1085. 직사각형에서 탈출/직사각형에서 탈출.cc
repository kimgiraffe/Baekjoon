#include<stdio.h>

int main(void)
{
	int x, y, w, h;
	scanf("%d %d %d %d", &x, &y, &w, &h);
	int i, d = x;
	int arr[4] = { x,y,w - x,h - y };
	for (i = 0; i < 4; i++) {
		if (d > arr[i]) {
			d = arr[i];
		}
	}
	printf("%d\n", d);
	return 0;
}