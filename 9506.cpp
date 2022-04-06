#include <iostream>
#include <vector>

using namespace std;

bool solution(vector<int>& v, int n)
{
	int sum = 0;
	for (int i = 1; i < n; i++) {
		if (n%i == 0) {
			v.push_back(i);
			sum += i;
		}
	}

	return sum == n;
}

int main(void)
{
	int n;
	while (true) {
		cin >> n;
		if (n == -1)
			break;

		vector<int> v;

		if (solution(v, n)) {
			cout << n << " = ";
			for (int i = 0; i < v.size(); i++) {
				cout << v[i] << " ";

				if (i != v.size() - 1)
					cout << "+ ";
			}
			cout << '\n';
		}
		else {
			cout << n << " is NOT perfect." << '\n';
		}
	}

	return 0;
}