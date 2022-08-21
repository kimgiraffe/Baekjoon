#include <iostream>
#include <vector>
#include <map>
using namespace std;

vector<int> v1;
vector<int> v2;
map<int, int> m;

int main(void)
{
	int N, M, cnt = 0;
	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		v1.push_back(a);
	}

	for (int i = 0; i < M; i++) {
		int b;
		cin >> b;
		v2.push_back(b);
	}

	for (int i = 0; i < v1.size(); i++) {
		m[v1[i]]++;
	}
	for (int i = 0; i < v2.size(); i++) {
		if (m[v2[i]])
			cnt++;
	}

	cout << v1.size() + v2.size() - cnt * 2;
	return 0;
}
