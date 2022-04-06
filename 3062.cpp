#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;
	int arr[100];
	while (N--) {
		int input, copy, sum, reverse = 0;
		int i = 0;
		bool T = true;
		cin >> input;
		copy = input;
		while (1) {

			reverse += input % 10;
			if (input / 10 == 0) {
				break;
			}
			reverse *= 10;
			input /= 10;
		}//역수 만들기
		sum = copy + reverse;

		while (1) {
			arr[i] = sum % 10;
			i++;
			if (sum / 10 == 0) {
				break;
			}
			sum /= 10;
		}//배열에 숫자 넣기

		//i번째 숫자랑 첫번째 숫자부터 차근차근 비교한다. i/2까지만 비교하면 된다. 앞뒤 비교이기 때문
		for (int j = 0; j < i / 2; j++) {
			if (arr[j] != arr[i - 1 - j]) {
				T = false;
			}
		}
		if (T)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}