#include <iostream>

using namespace std;

int main(void)
{
    int N;
    cin >> N;
    
    N %= 8;
    if(N==1){
        cout << "1";
    }
    else if(N == 0 || N == 2){
        cout << "2";
    }
    else if(N == 3 || N == 7){
        cout << "3";
    }
    else if(N == 4 || N == 6){
        cout << "4";
    }
    else {
        cout << "5";
    }
    
    return 0;
}