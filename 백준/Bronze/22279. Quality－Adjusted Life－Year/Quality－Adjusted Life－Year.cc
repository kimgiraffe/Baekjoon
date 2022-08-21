#include <iostream>

using namespace std;

double L[101][2];

int main(void)
{
	int N;
	double sum = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 2; j++) {
			cin >> L[i][j];
			sum += L[i][0] * L[i][1];
		}
	}
	cout << fixed;
	cout.precision(4);
	cout << sum;
	return 0;
}