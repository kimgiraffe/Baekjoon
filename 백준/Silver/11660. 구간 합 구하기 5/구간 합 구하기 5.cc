#include <iostream>

using namespace std;

int N, M, num;
int Sum[1025][1025] = {};

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> num;
			Sum[i + 1][j + 1] = Sum[i][j + 1] + Sum[i+1][j] - Sum[i][j] + num;
		}
	}
	while(M--) {
		int x1, y1, x2, y2;
		cin >> y1 >> x1 >> y2 >> x2;
		
		cout << Sum[y2][x2] - Sum[y1 - 1][x2] - Sum[y2][x1 - 1] + Sum[y1 - 1][x1 - 1] << '\n';
	}
	return 0;
}