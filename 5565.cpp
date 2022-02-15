#include <iostream>

using namespace std;

int main(void)
{
	int r[9], total, sum = 0;
	cin >> total;
	for (int i = 0; i < 9; i++)
	{
		cin >> r[i];
		sum += r[i];
	}

	cout << total - sum;
	return 0;
}