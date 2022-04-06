#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

#define MAX_STR 1000001
#define MAX_PAT 1000001

char str[MAX_STR] = { 0, };
char pat[MAX_PAT] = { 0, };
int res[MAX_STR] = { 0, };
int fail[MAX_PAT];
int cnt = 0;	//the number of appearances

void pmatch()
{
	int i = 0, j = 0;
	int lens = strlen(str);
	int lenp = strlen(pat);
	while (i < lens && j < lenp) {
		if (str[i] == pat[j]) {
			i++; j++;
		}
		else if (j == 0) i++;
		else j = fail[j - 1] + 1;
		if (j == lenp) {
			cnt++;
			res[cnt - 1] = i - lenp;
			j = fail[j - 1] + 1;
		}
	}
}

void FailFunc()
{
	int i, j, n = strlen(pat);
	fail[0] = -1;
	for (j = 1; j < n; j++) {
		i = fail[j - 1];
		while ((pat[j] != pat[i + 1]) && (i >= 0))
			i = fail[i];
		if (pat[j] == pat[i + 1])
			fail[j] = i + 1;
		else fail[j] = -1;
	}
}

int main(void)
{
	cin.getline(str, MAX_STR);
	cin.getline(pat, MAX_PAT);

	FailFunc();
	pmatch();

	cout << cnt << '\n';
	for (int i = 0; i < cnt; i++) {
		cout << res[i] + 1 << " ";
	}


	return 0;
}