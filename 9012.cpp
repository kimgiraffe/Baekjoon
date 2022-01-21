#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
using namespace std;


bool vps(string ps) {
	stack<char> s;
	bool sw = true;
	for (int i = 0; i < ps.size(); i++) {
		if (ps[i] == '(')
			s.push(ps[i]);
		else if (!s.empty() && ps[i] == ')') {
			s.pop();
		}
		else if (s.empty() && ps[i] == ')') {
			sw = false;
			break;
		}
	}
	if (s.empty() && sw) return true;
	else return false;
}

int main()
{
	int T;
	scanf("%d", &T);
	string ps;
	while (T--) {
		cin >> ps;
		if (vps(ps)) printf("YES\n");
		else printf("NO\n");
	}

	return 0;
}