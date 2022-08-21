#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>

#define MAX 10000001
using namespace std;

int a, b;
bool seive[MAX] = {
	false,
};

bool ispalindrome(int n)
{
	string s1 = to_string(n);
	string s2 = s1;
	reverse(s1.begin(), s1.end());
	if (s1 == s2)
		return true;
	else
		return false;
}

bool isPrime(int n)
{
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> a >> b;
	if (b > MAX - 1)
	{
		b = MAX - 1;
	}
	for (int i = 2; i < MAX; i++)
	{
		if (ispalindrome(i))
		{
			seive[i] = true;
		}
	}
	for (int i = a; i <= b; i++)
	{
		if (seive[i])
		{
			if (isPrime(i))
			{
				cout << i << "\n";
			}
		}
	}
	cout << "-1";
	return 0;
}