#include <iostream>
#include <algorithm>

double p[101];

using namespace std;

int main(void)
{
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> p[i];
	}

	sort(p, p + N);

	cout << fixed;
	cout.precision(2);
	cout << p[1];

	return 0;
}