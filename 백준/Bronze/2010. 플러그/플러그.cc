#include <iostream>

using namespace std;

int p[500000];

int main(void)
{
	int N, sum = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> p[i];
		sum += p[i];
	}
	cout << sum - (N - 1);
	return 0;
}