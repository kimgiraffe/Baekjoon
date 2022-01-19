#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main() {
	queue <int> q;
	int num;

	cin >> num;

	for (int i = 0; i < num; i++) {
		string com;
		cin >> com;

		if (com == "push") {
			int com_end;
			cin >> com_end;

			q.push(com_end);
		}
		else if (com == "pop") {
			if (q.empty())
				cout << "-1" << '\n';
			else {
				cout << q.front() << '\n';
				q.pop();
			}
		}
		else if (com == "size") {
			cout << q.size() << '\n';	
		}
		else if (com == "empty") {
			if (q.empty())
				cout << "1" << '\n';
			else
				cout << "0" << '\n';
		}
		else if (com == "front") {
			if (q.empty())
				cout << "-1" << '\n';
			else
				cout << q.front() << '\n';
		}
		else if (com == "back") {
			if (q.empty())
				cout << "-1" << '\n';
			else
				cout << q.back() << '\n';
		}
	}
}