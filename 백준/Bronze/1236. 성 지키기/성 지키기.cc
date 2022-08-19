#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>

using namespace std;

char c;
int rowCnt[100];
int colCnt[100];

int main(void)
{
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf(" %c", &c);
			if (c != '.') {
				rowCnt[i] = 1;
				colCnt[j] = 1;
			}
		}
	}


	int rowsum = 0, colsum = 0;
	for (int i = 0; i < N; i++)
		rowsum += rowCnt[i];
	for (int j = 0; j < M; j++)
		colsum += colCnt[j];

	cout << max(N - rowsum, M - colsum);
	return 0;
}