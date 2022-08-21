#include <iostream>

using namespace std;

int main(void)
{
    int a, b;
    cin >> a >> b;
    if((a+b) % 12 !=0){
        cout << (a + b) % 12;
    }
    else{
        cout << 12;
    }
    
    return 0;
}