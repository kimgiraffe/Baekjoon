#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N, M;
int arr[9];
bool visit[9];
vector <int> v;

void dfs(int k)
{
	if (k == M)
	{
		for (int i = 0; i < M; i++) {
			cout << arr[i] << " ";
		}
		cout << '\n';
	}
	else {
		int tmp = -1;
		for (int i = 0; i < v.size(); i++) {
			if (!visit[i] && tmp != v[i]) {
				tmp = v[i];
				visit[i] = true;
				arr[k] = v[i];
				dfs(k + 1);
				visit[i] = false;
			}
		}
	}
}

int main(void)
{

	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
		v.push_back(arr[i]);
	}

	sort(v.begin(), v.end());
	
	dfs(0);
	return 0;
}