#include <iostream>

using namespace std;

int main(void)
{
    int N;
    cin >> N;
    if(N%4==1 || N%4==3){
        cout << "0";
    }
    else if(N%4==2){
        cout << "1";
    }
    else{
        cout << "2";
    }
    
    return 0;
}