#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string s;
	cin >> s;
	int N;
	N = ((s[0] & 255) - 234) * 4096 + ((s[1] & 255) - 176) * 64 + (s[2] & 255) - 127;
	cout << N;		

	return 0;
}