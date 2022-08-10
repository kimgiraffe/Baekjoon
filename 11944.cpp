#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	int N, M;
	cin >> N >> M;
	string s, t = to_string(N);

	while (N--) {
		s += t;
	}
	std::cout << s.substr(0, M);

	return 0;
}