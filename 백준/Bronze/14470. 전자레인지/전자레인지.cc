#include <iostream>

using namespace std;

int main(void)
{
    int A, B, C, D, E, t = 0;
    cin >> A >> B >> C >> D >> E;
    if(A<0){
        t = (0-(A))*C+D+B*E;
    }
    else if(A==0){
        t = D + B *E;
    }
    else{
        t = (B-A)* E;
    }
    cout << t;
    return 0;
}