#include<stdio.h>

int main(void)
{
	int N, temp, ans = 0;
	scanf("%d", &N);

	int count = 0, key = 666;
	temp = key;
	while (count != N) {
		ans++;
		temp = ans;
		while (temp != 0) {
			if (temp % 1000 == key) {
				count++;
				break;
			}
			else {
				temp /= 10;
			}
		}
	}

	printf("%d\n", ans);

	return 0;
}