#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;
    int a2 = a / 100 * 100;
    cout << (a <= 99 ? 99 : a % 100 < 49 ? a2 - 1 : a2 + 99);
    
    return 0;
}