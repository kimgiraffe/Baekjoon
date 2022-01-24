#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int b[501][501] = {};
int Min = INT_MAX;
int Max = 0;

int main(void)
{
	int N, M, B;
	cin >> N >> M >> B;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> b[i][j];
			if (Min > b[i][j])
				Min = b[i][j];
			if (Max < b[i][j])
				Max = b[i][j];
		}
	}
	int T = INT_MAX;
	int height = 0;
		
	for (int k = Min; k <= Max; k++) {
		int sum_build = 0;
		int sum_remove = 0;

		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				int tmp = k - b[i][j];

				if(tmp < 0){
					sum_remove -= tmp;
				}
				else {
					sum_build += tmp;
				}
			}
		}

		if (sum_build <= sum_remove + B) {
			int tmp = sum_build + sum_remove * 2;
			if (T > tmp) {
				T = tmp;
				height = k;
			}

			if (T == tmp) {
				if (height < k)
					height = k;
			}
		}

	}

	cout << T << " " << height;
	return 0;
}