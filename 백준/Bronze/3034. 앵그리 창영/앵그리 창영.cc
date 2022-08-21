#include <iostream>

using namespace std;

int a[51]={};

int main(void)
{
    int N, W, H;
    cin >> N >> W >> H;
    for(int i = 0; i < N; i++){
        cin >> a[i];
        if(a[i]*a[i] <= W*W + H*H){
            cout << "DA\n";
        }
        else{
            cout << "NE\n";
        }
    }
    
    return 0;
}