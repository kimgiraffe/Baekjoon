#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <cstring>
#include <climits>

using namespace std;

int N;
int p[11], check1[11], check2[11];
vector<int> node[11];
vector<int> Left, Right;
int res = INT_MAX;

int cal(vector<int> v, int num) // 나누어진 구역이 연결되어있는지 확인하는 함수
{
	int cnt = 1;
	queue<int> q;

	memset(check2, 0, sizeof(check2));

	q.push(v[0]);
	check2[v[0]] = 1;

	while (!q.empty()) {
		int x = q.front();
		q.pop();
		for (int i = 0; i < node[x].size(); ++i) {
			if (check2[node[x][i]] == 0 && check1[node[x][i]] == num) {
				check2[node[x][i]] = 1;
				cnt++;
				q.push(node[x][i]);
			}
		}
	}

	return cnt;
}

void dfs(int L, int cnt)
{
	if (cnt >= 1) {
		for (int i = 1; i <= N; ++i) {
			if (check1[i]) {
				Left.push_back(i);
			}
			else {
				Right.push_back(i);
			}
		}
		if (Left.size() == 0 || Right.size() == 0) return;	//양쪽 지역구 중 하나가 비어있으면 무시

		int ans = 0;
		ans += cal(Left, 1);	//1번 선거구
		ans += cal(Right, 0);	//2번 선거구

		if (ans == N) {	//전체 구역의 개수와 같다면
			int p_left = 0, p_right = 0;
			for (int i = 0; i < Left.size(); ++i) {	//1번 지역구의 인구 수 합
				p_left += p[Left[i]];
			}
			for (int i = 0; i < Right.size(); ++i) {	//2번 지역구의 인구 수 합
				p_right += p[Right[i]];
			}
			int val = abs(p_left - p_right); //두 선거구의 인구 차이
			if (res > val) res = val; // 최소값 갱신
		}
		Left.clear();
		Right.clear();
	}

	for (int i = L	; i <= N; ++i) {
		if (check1[i] == 0) {
			check1[i] = 1;
			dfs(i + 1, cnt + 1);
			check1[i] = 0;
		}
	}
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N;
	for (int i = 1; i <= N; ++i) {
		cin >> p[i];
	}

	int x, tmp;
	for (int i = 1; i <= N; ++i) {
		cin >> x;
		for (int j = 1; j <= x; ++j) {
			cin >> tmp;
			node[i].push_back(tmp);
		}
	}
	dfs(1, 0);

	if (res == INT_MAX) cout << "-1";
	else cout << res;

	return 0;
}