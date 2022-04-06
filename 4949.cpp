#include <iostream>
#include <stack>
#include <algorithm>
#include <string>

using namespace std;

string str;

int main(void)
{
	while (1) {
		getline(cin, str);
		stack <char> s;
		if (str[0] == '.') break;
		
		for (int i = 0; i < str.length() - 1; i++)
		{
			if (str[i] == '(') s.push('(');
			if (str[i] == '[') s.push('[');
			if (str[i] == ']') {
				if (!s.empty() && s.top() == '[') s.pop();
				else {
				printf("no\n"); break;
				}
			}

			if (str[i] == ')') {
				if (!s.empty() && s.top() == '(') s.pop();
				else {
					printf("no\n"); break;
				}
			}
			if (s.empty() && i == str.length() - 2) printf("yes\n");
			else if (!s.empty() && i == str.length() - 2) printf("no\n");
		}
	}

	return 0;
}