#include <iostream>
#include <algorithm>
using namespace std;

int sticks[101] = { 0, };
int used[101] = { 0, };
int n, len;

bool dfs(int i, int l, int t)
{
	if (l == 0)
	{
		t -= len;
		if (t == 0) return true;
		for (i = 0; used[i]; ++i);
		used[i] = l;
		if (dfs(i + 1, len - sticks[i], t)) return true;
		used[i] = 0; t += len;
	}
	else {
		for (int j = i; j < n; ++j) {
			if (j > 0 && sticks[j] == sticks[j - 1] && !used[j - l])
				continue;
			if (!used[j] && l >= sticks[j]) {
				l -= sticks[j];
				used[j] = l;
				if (dfs(j, l, t)) return true;
				l += sticks[j];
				used[j] = 0;
				if (sticks[j] == l)
					break;
			}
		}
	}
	return false;
}

bool cmp(const int a, const int b)
{
	return a > b;
}

int main(void)
{
	while (cin >> n && n)
	{
		int sum = 0;
		for (int i = 0; i < n; ++i)
		{
			cin >> sticks[i]; sum += sticks[i];
			used[i] = 0;
		}
		sort(sticks, sticks + n, cmp);
		bool flag = false;
		for (len = sticks[0]; len <= sum / 2; ++len)
		{
			if (sum%len == 0)
			{
				if (dfs(0, len, sum))
				{
					flag = true;
					cout << len << "\n";
					break;
				}
			}
		}
		if (!flag) cout << sum << "\n";
	}
	return 0;
}