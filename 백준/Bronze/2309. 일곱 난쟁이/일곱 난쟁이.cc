#include<iostream>
#include<algorithm>
using namespace std;
int a[10];
int main() {
	int sum = 0;
	for (int i = 0; i < 9; i++) {
		cin >> a[i];
		sum += a[i];
	}
	sort(a, a + 9); // 오름차순 정렬
	for (int i = 0; i < 9; i++) {
		for (int j = i+1; j < 9; j++) {
			if ((sum - (a[i] + a[j])) == 100) {
				for (int k = 0; k < 9; k++) {
					if (i == k || j == k) continue; // 우리가 찾은 이상한 난쟁이는 빼고 출력
					cout << a[k] << '\n';
				}
				return 0;
			}
		}
	}
}