#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

using namespace std;

int main(void) {
	int n, ans = 0;
	while (~scanf("%d", &n))
	{
		ans += n;
	}
	cout << ans << '\n';
}