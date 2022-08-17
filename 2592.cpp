#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <map>

using namespace std;

map<int, int> m;

int main(void)
{
	// freopen("input.txt", "r", stdin);
	int tmp, sum = 0, res, count = 0;
	for (int i = 0; i < 10; i++) {
		cin >> tmp;
		sum += tmp;
		if (m.count(tmp))
			m[tmp]++;
		else
			m[tmp] = 1;
	}
	for (auto it = m.begin(); it != m.end(); it++) {
		if (it->second > count) {
			res = it->first;
			count = it->second;
		}
	}
	cout << sum / 10 << '\n' << res;
}