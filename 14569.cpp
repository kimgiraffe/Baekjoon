#include <iostream>
#include <vector>

using namespace std;

vector<unsigned long long> arr;

int main(void)
{
	unsigned long long N, k, t, M, p, q;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> k;
		unsigned long long tmp = 0;
		for (int j = 0; j < k; j++) {
			cin >> t;
			tmp += (1ull << t);
		}
		arr.push_back(tmp);
	}
	cin >> M;
	for (int i = 0; i < M; i++) {

		unsigned long long tmp = 0;
		cin >> p;
		for (int j = 0; j < p; j++) {
			cin >> q;
			tmp += (1ull << q);

		}
		int cnt = 0;
		for (int j = 0; j < arr.size(); j++) {
			if ((tmp & arr[j]) == arr[j]) {
				cnt++;
			}
		}
		cout << cnt << '\n';
	}



	return 0;
}