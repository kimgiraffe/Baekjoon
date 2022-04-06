#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int N, M;
int arr[51][51] = {};

int calc(void)
{
	int res = 1;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			for (int k = 1; k < min(N, M); k++) {
				if (i + k < N && j + k < M && arr[i + k][j] == arr[i][j] && arr[i + k][j + k] == arr[i][j] && arr[i][j + k] == arr[i][j])
					res = max(res, k + 1);
			}
		}
	}
	return res * res;

}

int main(void)
{
	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		string tmp;
		cin >> tmp;
		for (int j = 0; j < M; j++) {
			arr[i][j] = tmp[j] - '0';
		}
	}

	cout << calc();

	return 0;
}