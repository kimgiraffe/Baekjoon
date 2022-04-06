#include <iostream>

using namespace std;

int main(void)
{
	long long N;
	cin >> N;

	if (N % 2 == 1)
		cout << "SK";
	else
		cout << "CY";

	return 0;
}