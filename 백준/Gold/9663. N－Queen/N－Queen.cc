#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int N;
int col[15];
int count = 0;

bool promising(int i)
{
	int k;
	bool s;
	k = 1;
	s = true;
	while (k < i&& s) {
		if (col[i] == col[k] || abs(col[i] - col[k]) == i - k)
			s = false;
		k++;
	}
	return s;
}

void queens(int i) {
	int j;
	if (promising(i)){
		if (i == N) {
			count++;
		}
		else {
			for (j = 1; j <= N; j++) {
				col[i + 1] = j;
				queens(i + 1);
			}
		}
    }
}

int main(void)
{
	scanf("%d", &N);

	queens(0);
	printf("%d", count);
	return 0;
}

