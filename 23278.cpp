#include <iostream>
#include <algorithm>

using namespace std;

double s[51];
double sum = 0;

int main(void)
{
	int N, L, H;
	cin >> N >> L >> H;
	for (int i = 0; i < N; i++){
		cin >> s[i];
	}

	sort(s, s + N);
	for (int i = L; i < N - H; i++) {
		sum += s[i];
	}

	cout << fixed;
	cout.precision(10);
	cout << sum / (N-L-H);

	return 0;
}