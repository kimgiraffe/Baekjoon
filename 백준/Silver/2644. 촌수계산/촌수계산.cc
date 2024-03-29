#include <iostream>
#include <algorithm>

#define INF 987654321
using namespace std;

int n, a, b, m;
int arr[101][101];

void floyd_warshall()
{
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			for (int k = 1; k <= n; k++) {
				if (arr[j][i] != INF && arr[i][k] != INF)
					arr[j][k] = min(arr[j][k], arr[j][i] + arr[i][k]);
			}
		}
	}
}

int main(void)
{
	cin >> n >> a >> b >> m;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			arr[i][j] = INF;
		}
	}

	while (m--) {
		int x, y;
		cin >> x >> y;
		arr[x][y] = 1;
		arr[y][x] = 1;
	}
	floyd_warshall();
	/*for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (i == j || arr[i][j] == INF)
				cout << -1 << " ";
			else
				cout << arr[i][j] << " ";
		}
		cout << '\n';
	}*/

	if (arr[a][b] == INF)
		cout << -1;
	else
		cout << arr[a][b];

	return 0;
}