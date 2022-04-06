#include <iostream>
#include <algorithm>

using namespace std;

int A[50], P[50];

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> A[i];
		P[i] = i;
	}

	for (int i = 1; i < N; i++) {
		int j = i;
		int v = P[i];
		while (j > 0 && A[P[j - 1]] > A[v]) {
			P[j] = P[j - 1];
			j--;
		}
		P[j] = v;
	}


	for (int i = 0; i < N; i++) {
		A[P[i]] = i;
	}

	for (int i = 0; i < N; i++)
		cout << A[i] << " ";

	return 0;
}