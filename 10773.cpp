#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main(void)
{
	int K, n;
	cin >> K;
	stack<int> s;
	for (int i = 0; i < K; i++) {
		cin >> n;
		if (n != 0) {
			s.push(n);
		}
		else {
			s.pop();
		}
	}

	int sum = 0;
	for (int i = 0; !s.empty(); i++) {
		sum += s.top();
		s.pop();
	}

	cout << sum;

	return 0;
}