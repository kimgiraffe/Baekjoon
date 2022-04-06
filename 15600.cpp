#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	int N;
	cin >> N;

	if (N > 3)
		cout << N - 2;
	else
		cout << "1";

	return 0;
}