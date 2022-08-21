#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	int s1[6], s2[2];
	for (int i = 0; i < 4; i++) {
		cin >> s1[i];
	}
	for (int i = 0; i < 2; i++) {
		cin >> s2[i];
	}
	sort(s1, s1 + 4);
	sort(s2, s2 + 2);
	int sum1 = s1[1] + s1[2] + s1[3];
	int sum2 = s2[1];

	cout << sum1 + sum2;

	return 0;
}