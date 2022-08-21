#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <deque>

using namespace std;

int main(int argc, char** argv)
{
	int N;
	deque<int> dq;
	cin >> N;

	while (N--) {
		string text;
		cin >> text;

		if (text == "push_front") {
			int X;
			scanf("%d", &X);
			dq.push_front(X);
		}
		else if (text == "push_back") {
			int X;
			scanf("%d", &X);
			dq.push_back(X);
		}
		else if (text == "pop_front") {
			if (!dq.empty()) {
				printf("%d\n", dq.front());
				dq.pop_front();
			}
			else {
				printf("-1\n");
			}
		}
		else if (text == "pop_back") {
			if (!dq.empty()) {
				printf("%d\n", dq.back());
				dq.pop_back();
			}
			else {
				printf("-1\n");
			}
		}
		else if (text == "size") {
			printf("%d\n", dq.size());
		}
		else if (text == "empty") {
			printf("%d\n", dq.empty());
		}
		else if (text == "front") {
			if (!dq.empty()) {
				printf("%d\n", dq.front());
			}
			else {
				printf("-1\n");
			}
		}
		else if (text == "back") {
			if (!dq.empty()) {
				printf("%d\n", dq.back());
			}
			else {
				printf("-1\n");
			}
		}
	}

	return 0;
}