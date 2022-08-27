#include <iostream>
#include <string>

using namespace std;

struct member {
	string name;
	int age;
	int weight;
};

member M;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	while (true) {
		cin >> M.name >> M.age >> M.weight;
		if (M.name[0] == '#' && M.age == 0 && M.weight == 0) break;
		if (M.age > 17 || M.weight >= 80) {
			cout << M.name << ' ' << "Senior\n";
		}
		else {
			cout << M.name << ' ' << "Junior\n";
		}
	}

	return 0;
}