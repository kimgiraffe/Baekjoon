#include <iostream>
#include <algorithm>
#define MAX_COUNTRY 1001
#define MAX_MEDAL 1000001

using namespace std;

struct country {
	int index;
	int g;
	int s;
	int b;
};

bool cmp(country a, country b) {
	if (a.g > b.g)
		return true;
	else if (a.g == b.g) {
		if (a.s > b.s)
			return true;
		else if (a.s == b.s) {
			if (a.b > b.b) return true;
		}
	}

	return false;
}

country arr[MAX_COUNTRY];
int n1, n2, n3, n4;
int res = 0, val = 0;

int main(void)
{
	int N, K;
	cin >> N >> K;

	for (int i = 0; i < N; i++) {
		cin >> n1 >> n2 >> n3 >> n4;
		arr[i].index = n1;
		arr[i].g = n2;
		arr[i].s = n3;
		arr[i].b = n4;
	}

	sort(arr, arr + N, cmp);

	for (int i = 0; i < N; i++) {
		if (arr[i].index == K) {
			res = i;
			break;
		}
	}

	for (int i = res - 1;; i--) {
		if (arr[i].g != arr[res].g || arr[i].s != arr[res].s || arr[i].b != arr[res].b) {
			break;
		}
		val++;
	}

	cout << res - val + 1;

	return 0;
}