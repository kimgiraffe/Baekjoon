#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>

using namespace std;

int N;

bool isPrime(int num)
{
	if (num < 2) return false;

	for (int i = 2; i <= sqrt(num); i++){
		if (num % i == 0) return false;
	}

	return true;
}

bool isPalindrome(string str)
{
	string front, back;
	front = str;
	reverse(str.begin(), str.end());
	back = str;
	if (front == back) return true;
	else return false;
}

int main(void)
{
	cin >> N;
	
	for (int i = N; ; i++) {
		if (isPrime(i) && isPalindrome(to_string(i))) {
			cout << i;
			break;
		}
	}

	return 0;
}