#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	// B=N일 때, 17N = B + 16B(=A)
	string A, B;
	cin >> B;
	// 계산의 편의를 위해 제일 왼쪽 자리를 LSB로 맞춘다
	reverse(B.begin(), B.end());
	A = "0000" + B;

	bool carry = false;
	int i;
	// B의 length만큼 계산
	for (i = 0; i<B.size(); i++) {
		int val = A[i] - '0' + B[i] - '0' + carry;
		if (val >= 2) {
			val -= 2;
			carry = true;
		}
		else carry = false;
		A[i] = val + '0';
	}
	// B의 범위를 넘어가는 A의 4자리 계산
	for (; i<A.size(); i++) {
		int val = A[i] - '0' + carry;
		if (val == 2) {
			val = 0;
			carry = true;
		}
		else carry = false;
		A[i] = val + '0';
	}
	// 마지막 자리에서 carry 발생시 처리
	if (carry) A.push_back('1');

	// 다시 제일 오른쪽 자리를 LSB로 맞추고 출력
	reverse(A.begin(), A.end());
	cout << A << endl;
}

