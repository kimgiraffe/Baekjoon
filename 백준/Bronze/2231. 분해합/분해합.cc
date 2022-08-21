#include <iostream>

using namespace std;

void test(int n);

int main()
{
	int n;
	cin >> n;

	test(n);

	return 0;
}

void test(int n)
{
	for (int i = 1; i < n; i++)
	{
		int ans{ i }, temp{ i };
		while (temp)
		{
			ans += temp % 10;

			temp /= 10;
		}
		if (ans == n)
		{
			cout << i;
			return;
		}
	}
	cout << 0;
	return;
}