#include <iostream>

using namespace std;

int main(void)
{
    int T, r, e, c;
    cin >> T;
    while(T--){
        cin >> r >> e >> c;
        if(r+c>e){
            cout << "do not advertise\n";
        }
        else if(r+c<e){
            cout << "advertise\n";
        }
        else{
            cout << "does not matter\n";
        }
    }
    return 0;
}