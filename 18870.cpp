#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
	int N;
	scanf("%d", &N);
	vector<int> v(N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &v[i]);
	}
	vector<int> cv(v);
	sort(cv.begin(), cv.end());

	cv.erase(unique(cv.begin(), cv.end()), cv.end());

	for (int i = 0; i < N; i++) {
		auto it = lower_bound(cv.begin(), cv.end(), v[i]);
		printf("%d ", it - cv.begin());
	}

	return 0;
}