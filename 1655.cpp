#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <queue>
using namespace std;

int main(int argc, char** argv) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	priority_queue<int> MaxHeap;
	priority_queue<int, vector<int>, greater<int>> MinHeap;
	int N, A;
	cin >> N;
	for (int i = 1; i <= N; ++i) {
		cin >> A;
		if (MaxHeap.size() == MinHeap.size()) {
			MaxHeap.push(A);
		}
		else {
			MinHeap.push(A);
		}
		if (!MaxHeap.empty() && !MinHeap.empty() && MaxHeap.top() > MinHeap.top()) {
			int MAX = MaxHeap.top();
			int MIN = MinHeap.top();
			MaxHeap.pop();
			MinHeap.pop();
			MaxHeap.push(MIN);
			MinHeap.push(MAX);
		}
		cout << MaxHeap.top() << '\n';
	}
	
	return 0;
}