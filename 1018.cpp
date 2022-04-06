#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string WB[8] = {
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW"
};

string BW[8] = {
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB"
};

string chess[50];

int WB_cnt(int x, int y) {
	int cnt = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (chess[x + i][y + j] != WB[i][j])
				cnt++;
		}
	}
	return cnt;
}

int BW_cnt(int x, int y) {
	int cnt = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (chess[x + i][y + j] != BW[i][j])
				cnt++;
		}
	}
	return cnt;
}

int main(void)
{
	int N, M;
	int min_val = 12345;
	scanf("%d %d", &N, &M);
	for (int i = 0; i < N; i++) {
		cin >> chess[i];
	}
	for (int i = 0; i + 8 <= N; i++) {
		for (int j = 0; j + 8 <= M; j++) {
			int tmp;
			tmp = min(WB_cnt(i, j), BW_cnt(i, j));
			if (tmp < min_val) {
				min_val = tmp;
			}
		}
	}
	printf("%d", min_val);

	return 0;
}