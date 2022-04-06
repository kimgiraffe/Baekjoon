#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

bool cmp(pair<int, string> u, pair<int, string> v)
{
	return u.first < v.first;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	vector<pair<int, string>> vec(N);
	for (int i = 0; i < N; i++) {
		cin >> vec[i].first >> vec[i].second;
	}

	stable_sort(vec.begin(), vec.end(), cmp);

	for (int i = 0; i < N; i++) {
		cout << vec[i].first << " " << vec[i].second << "\n";
	}

	return 0;
}