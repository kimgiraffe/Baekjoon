#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int arr[1000];
vector<int> v;

int main(void)
{
	int N, t = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	int start = arr[0];
	for (int i = 1; i < N; i++) {
		if (arr[i] > start) {
			t += arr[i] - start;
			start = arr[i];
		}
		else {
			v.push_back(t);
			start = arr[i];
			t = 0;
		}
	}
	v.push_back(t);

	if (v.size() == 0) {
		cout << "0";
	}
	else {
		sort(v.begin(), v.end());
		cout << v[v.size() - 1];	
	}

	return 0;
}