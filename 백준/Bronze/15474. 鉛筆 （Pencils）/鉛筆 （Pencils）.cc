#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	double N, A, B, C, D;
	cin >> N >> A >> B >> C >> D;
	
	cout << min(ceil(N / A)*B, ceil(N / C)*D);

	return 0;
}