#include <iostream>
#include <string>
using namespace std;

const int MAX = 10;

char vowels[MAX] = { 'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U' };

bool isVowel(char c)
{
	for (int i = 0; i < MAX; i++)
	{
		if (c == vowels[i])
		{
			return true;
		}
	}

	return false;
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	while (true)
	{
		string s;
		getline(cin, s);

		if (s == "#")
		{
			break;
		}

		int result = 0;

		for (int i = 0; i < s.length(); i++)
		{
			if (isVowel(s[i]))
			{
				result++;
			}
		}

		cout << result << "\n";
	}

	return 0;
}