#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int v[500001] = {};

int main(void)
{
	int n, sum = 0;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> v[i];
		sum += v[i];
	}
	sort(v, v+n);
	
	cout << sum - v[n-1];
	return 0;
}