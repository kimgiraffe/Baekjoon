#include <iostream>

using namespace std;

int c[101][101];
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1, -1,0,0 };

int main(void)
{
	int N, M, total = 0;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> c[i][j];
		}
	}
	total += 2*N*M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			for (int k = 0; k < 4; k++) {
				int nx = i + dx[k];
				int ny = j + dy[k];

				if (nx >= 0 && nx < N && ny >= 0 && ny < M) {
					if (c[nx][ny] < c[i][j]) {
						total += (c[i][j] - c[nx][ny]);
					}
				
				}
				else {
					total += c[i][j];
				}
			}
		}
	}

	cout << total;
	return 0;
}