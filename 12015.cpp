#define _CRT_SECURE_NO_WARNINGS
#include <vector>
#include <climits>
#include <cstdio>

using namespace std;

int main(void)
{
	int N, tmp, cnt = 0;
	
	vector<int> list;
	list.push_back(INT_MIN);

	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &tmp);
		if (tmp > list.back()) {
			list.push_back(tmp);
			cnt++;
		}
		else {
			vector<int>::iterator low = lower_bound(list.begin(), list.end(), tmp);
			*low = tmp;
		}
	}

	printf("%d", cnt);

	return 0;
}